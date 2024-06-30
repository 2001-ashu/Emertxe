#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <unistd.h>
//#include<sys/mman.h>

int main()
{
    int pid = fork();
    if (pid > 0)
    {
        printf("This is parent with pid =%d\n", getpid());
        sleep(10);
        printf("Parent terminating\n");
    }
    else if (pid == 0)
    {
        printf("This is child with pid =%d\n and parent pid=%d", getpid(),getppid());
        sleep(5);
                printf("This is child with pid =%d\n and parent pid=%d", getpid(),getppid());

        printf("child terminating\n");
    }
    else{
        perror("Fork");
        return -1;
    }
}