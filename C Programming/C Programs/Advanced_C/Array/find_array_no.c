#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n;
    n=sizeof(arr);
    printf("No of Elements in array is:%d\n",n/sizeof(int));
    for(int i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
}