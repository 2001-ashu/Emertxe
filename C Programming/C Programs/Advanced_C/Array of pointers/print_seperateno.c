#include<stdio.h>
int main()
{
     int a[]={1,2},b[]={4,5},c[]={7,8};
     int *ptr[3]={a,b,c};
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<2;j++)
        {
            printf("%d ",*(*(ptr+i)+j));
        }
        printf("\n");
     }
}