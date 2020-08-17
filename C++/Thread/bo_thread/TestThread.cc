#include "Thread.h"

#include <unistd.h>
#include <stdlib.h>
#include <time.h>

#include <iostream>
#include <memory>

using std::cout;
using std::endl;
using std::unique_ptr;

class MyTask
{
public:
    void run()
    {
        ::srand(::clock());

        int cnt = 20;
        while(cnt--)
        {
            int number = ::rand() % 100;
            cout << "sub Thread:" << pthread_self() 
                << " number = " << number << endl;
            ::sleep(1);
        }
    }
};


void TaskProcess(int)
{
    ::srand(::clock());

    int cnt = 20;
    while(cnt--)
    {
        int number = ::rand() % 100;
        cout << "sub Thread:" << pthread_self() 
            << " number = " << number << endl;
        ::sleep(1);
    }
}

int main(void)
{
    unique_ptr<wd::Thread> thread(new wd::Thread(
        //std::bind(&MyTask::run, MyTask())
        std::bind(TaskProcess, 1)
        ));
    thread->start();

    thread->join();

    return 0;
}

