#include <stdio.h>
#include <sys/fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <unistd.h>
int main()
{

    int pid = fork();
    char str[50];

    if (pid == 0)
    {
        printf("Child Process Created  with PID=%d\n", getpid());
        sleep(5);
    }
    else if (pid > 0)
    {
        printf("Parent Process Created with PID=%d\n", getpid());
        sprintf(str, "/proc/%d/status", pid);
        int fd = open("str", O_RDONLY);
        if (fd == -1)
        {
            perror("File Error\n");
            exit(1);
        }
        else
        {
            int count = 0;
            char file_buf[10];
            while (read(fd, file_buf, 10) > 0)
            {
                printf("%s", file_buf);
                count++;
                if (count == 4)
                {

                    break;
                }
            }
            printf("\n");
            close(fd);
        }
        sleep(6);
    }
    int fd = open("str", O_RDONLY);
    if (fd == -1)
    {
        perror("File Error\n");
        exit(1);
    }
    else
    {
        int count = 0;
        char file_buf[10];
        while (read(fd, file_buf, 10) > 0)
        {
            printf("%s", file_buf);
            count++;
            if (count == 4)
            {
                break;
            }
        }
        printf("\n");
        close(fd);
    }
}
