#include<stdio.h>
void print_array(int **ptr)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",ptr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
     int a[3]={1,2,3};
     int b[3]={4,5,6};
     int c[3]={7,8,9};
     int *ptr[3]={a,b,c};
     print_array(ptr);

}