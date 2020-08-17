#pragma once

#include "Noncopyable.h"
#include <pthread.h>
#include <functional>

using std::function;

namespace wd
{


class Thread
: Noncopyable
{
public:
    using Threadcallback = function<void()>;
    
    Thread(Threadcallback && cb)
    :_pthid(0)
    ,_isRunning(false)
    ,_cb(std::move(cb))
    {}

    void start();

    void join();
    
    ~Thread();

private:
    static void* threadfunc(void* arg);

private:
    pthread_t _pthid;
    bool _isRunning;
    Threadcallback _cb;
};
} //end of namespace wd
