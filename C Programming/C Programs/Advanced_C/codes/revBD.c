#include<stdio.h>
int main()
{
    int i ,j,arr[3][3] = {1,2,3,4,5,6,7,8,9};
    for(i=0;i<3;i++)
    {
        for(j=2;j>=0;j--)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}