/*
Name:Ashutosh Uday Zende
Date:21/12/2023
Description:WAP to compare two arrays
Sample i/p:array 1:3
           array 2:3
           array1 element:2 -50 17
           array2 element:-50 2 17
sample o/p:Array element are equal
*/
#include<stdio.h>
int main()
{
    int i,j,s1,s2,flag=0;                                                       // Variable initialise and declaration
    printf("Enter the array1 size : ");                                         //User Prompt
    scanf("%d",&s1);                                                            //size of 1st array
    printf("Enter the array2 size : ");                                         //User prompt
    scanf("%d",&s2);                                                            //size of 2nd array
    int arr1[s1],arr2[s2];                                                      // Declare array1 and array2
    printf("Enter the array1 size : ");                                         //User prompt
        for(i=0;i<s1;i++)                                                           // loop run until i less than s1
    {
        scanf("%d",&arr1[i]);                                                   // input array1 element
    }
    printf("Enter the array2 size : ");                                         //User prompt
    for(i=0;i<s2;i++)                                                           // loop run until i less than s1
    {
        scanf("%d",&arr2[i]);                                                   // input array1 element
    }
  
    for(i=0;i<s1;i++)                                                           // loop run until i less than s1
    {
        for(j=i+1;j<s2;j++){                                                    //loop run until j less than s2
        if(arr1[i]>arr1[j])                                                     // check condition
        {
        
        int a=arr1[i];                                                          // sort method
        arr1[i]=arr1[j];
        arr1[j]=a;
        }
        }
    }

 
    for(i=0;i<s1;i++)                                                           // loop run until i less than s1
    {
        for(j=i+1;j<s2;j++){                                                    //loop run until j less than s2
        if(arr2[i]>arr2[j])                                                     // check condition
        {
        
        int a=arr2[i];                                                          // sort method
        arr2[i]=arr2[j];
        arr2[j]=a;
        }
        }
    }
    for(i=0;i<s1;i++)                                                           //loop run until i less than s1
    {
        for(j=0;j<s2;j++)                                                       // loop run until j less than s2
        {
            if(arr1[i]!=arr2[j])                                                //check condition 
           { flag++;    }                                                         // increment flag value
        }
    }
      for(i=0;i<s2;i++)                                                           //loop run until i less than s1
    {
        for(j=0;j<s1;j++)                                                       // loop run until j less than s2
        {
            if(arr1[i]!=arr2[j])                                                 //check condition 
            {flag++;                                                             // increment flag value
        }else{
            flag=0;
        }
        }
    }
    if(flag==0)
    {
        printf("Array elements are equal.");
    }
    else{
        printf("Array elements are not equal.");
    }
}
