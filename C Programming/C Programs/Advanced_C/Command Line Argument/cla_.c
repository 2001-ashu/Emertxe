#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int sum = 0;
    printf("Using For Loop");
    for (int i = 1; i < argc; i++)
    {
        printf("Element[%d]:%s\n", i, argv[i]);
        // int num=(*(*(argv+i)))-'0';
        // sum = sum + num;
        sum=sum+atoi(argv[i]);
    }
    printf("Addition Of All : %d\n", sum);
    float avg = (float)sum / (argc-1);
    printf("Average Of All : %g", avg);

}