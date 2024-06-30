#include<stdio.h>
#include<sys/fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<errno.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
    if(argc==0)
    {
        printf("Error:Pass the file name through cmd line\n");
        return 0;
    }
    int backup=dup(1);
    close(1);
     int fd=open(argv[1],O_WRONLY);
     
    // dup2(fd,1);
     printf("Print this message into the file\n");
     close(fd);
    dup(backup);

     printf("Print this message into STDOUT\n");

}