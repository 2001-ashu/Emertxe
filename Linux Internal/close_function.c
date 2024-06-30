#include<stdio.h>
#include<sys/fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<errno.h>

int main()
{
    close(1);
    int fd=open("newfile.txt",O_WRONLY);
    printf("out put will not show into the console \n This pritf line write to the that file\n");
}