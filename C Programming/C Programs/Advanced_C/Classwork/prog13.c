#include<stdio.h>
int main()
{
    int num,i,j;
    printf("Enter n : ");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        for(j=0;j<num+i;j++)
        {
            if(j<num-i-1)
            {
                printf("  ");
            }
            else
            printf("* ");
        }
        printf("\n");
    }
}