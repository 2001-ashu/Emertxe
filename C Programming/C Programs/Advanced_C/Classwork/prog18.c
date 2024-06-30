/*
Name:Ashutosh Uday Zende
Date:07/12/2023
Description:WAP to find the average of elements stored in a array
sample i/p:Enter the size : 5
           Enter the array elements : 13,5,-1,8,17
sample o/p: Average is : 8.4
*/
#include<stdio.h>
int main()
{
    float sum=0;
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
            // printf("%d",sum);

     float res=sum/size;
     printf("Average is : %g ",res);
}