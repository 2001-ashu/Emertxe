#include<stdio.h>
#include<sys/fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<errno.h>
#include<unistd.h>

int main()
{

int fd=open("newfile.txt",O_RDWR);
char Buf[100];
int ret;
do
{
    ret=read(fd,Buf,20);
    printf("ret->%d\n",ret);
} while (ret==20);

}