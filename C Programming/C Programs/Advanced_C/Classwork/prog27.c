/*
Name:Ashutosh Uday Zende
Date:16/12/2023
Description:WAP to find the average of 5 array elements using function
*/
#include<stdio.h>
float average(int *arr , int *s)
{
    float avg;
    float sum=0;
  for(int i=0;i<*s;i++)
    {
       scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg= sum / *s;
    return avg; 
}
int main()
{
    int s;
    printf("Enter the size : ");
    scanf("%d",&s);
    int arr[s];
    printf("Average is %g",average(arr,&s));
    
}