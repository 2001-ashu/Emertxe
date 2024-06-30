#include<stdio.h>
#include<sys/fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<errno.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
     int fd=open(argv[1],O_WRONLY);
     dup2(fd,1);
     printf("Hello Ashutosh\n");
}