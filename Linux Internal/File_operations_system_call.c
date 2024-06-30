#include<stdio.h>
#include<sys/fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<errno.h>

int main()
{
    int fd=open("File2.txt",O_WRONLY);
    if(fd==-1)
    {
        if(errno==ENOENT)
        {
            printf("Named file does not exist\n");
            return -1;

        }
    }     
    printf("Fd->%d\n",fd);
}