#include <func.h>

int main()
{
    pid_t pid;
    int iStack=10;
    pid=fork();
    if(0==pid)
    {
        printf("I am child process,mypid=%d,ppid=%d %d %p\n",getpid(),getppid(),iStack,&iStack);
    }else{
        printf("I am parent process,mychildpid=%d,pid=%d %d %p\n",pid,getpid(),iStack,&iStack);
        iStack=5;
        printf("I am parent process,mychildpid=%d,pid=%d %d %p\n",pid,getpid(),iStack,&iStack);
        sleep(1);
    }
    return 0;
}

