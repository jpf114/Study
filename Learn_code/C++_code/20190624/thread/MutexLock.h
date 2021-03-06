 ///
 /// @file    MutexLock.h
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2019-06-24 11:12:56
 ///
 
#pragma once


#include <stdio.h>
#include <errno.h>
#include <pthread.h>

#include <iostream>
using std::cout;
using std::endl;
 

namespace wd
{

class MutexLock
{
public:
	MutexLock()
	: _isLocking(false)
	{
		if(pthread_mutex_init(&_mutex, nullptr)) {
			perror(">> pthread_mutex_init");
		}
	}

	//C++11用法, 表达禁止复制
	MutexLock(const MutexLock &) = delete;
	MutexLock & operator=(const MutexLock &) = delete;

	void lock()
	{
		if(pthread_mutex_lock(&_mutex)) {
			perror(">> pthread_mutex_lock");
		}
		_isLocking = true;
	}

	void unlock()
	{
		if(pthread_mutex_unlock(&_mutex)) {
			perror(">> pthread_mutex_unlock");
		}
		_isLocking = false;
	}

	bool isLocking() const
	{	return _isLocking;	}	

	pthread_mutex_t * getMutexLockPtr()
	{	return &_mutex;	}

	~MutexLock()
	{
		if(pthread_mutex_destroy(&_mutex)) {
			perror(">> pthread_mutex_destroy");
		}
	}
#if 0
private://禁止复制 ==》对象语义
		//可以复制 ==》值语义
	MutexLock(const MutexLock&);
	MutexLock & operator=(const MutexLock &);
#endif

private:
	pthread_mutex_t _mutex;
	bool _isLocking;
};

class MutexLockGuard
{
public:
	MutexLockGuard(MutexLock & mutex)
	: _mutex(mutex)
	{
		_mutex.lock();
	}

	~MutexLockGuard()
	{
		_mutex.unlock();
	}

private:
	MutexLock & _mutex;
};



}//end of namespace wd
