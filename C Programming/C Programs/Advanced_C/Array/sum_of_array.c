#include<stdio.h>
int main()
{
    int size,sum=0;
    printf("Enter the size:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum of Array :%d",sum);


}