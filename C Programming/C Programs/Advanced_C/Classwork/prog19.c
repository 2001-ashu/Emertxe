/*
Name:Ashutosh Uday Zende
Date:13/12/2023
Description:WAP to find the largest array element
Sample i/p:Enter the size : 5
           Enter the array element : 5 100 -2 75 42
Sample o/p:Largest element is : 100
*/
#include<stdio.h>

int main()
{
    int size;                                                                   // variable initialise
    printf("Enter the size : ");                                                // user propmt
    scanf("%d",&size);                                                          // User input
    int arr[size];                                                              // initialise array with size
    printf("Enter the array elements : ");                                      // User prompt
    for(int i=0;i<size;i++)                                                     // loop run until i less than size
    {
        scanf("%d",&arr[i]);                                                    // Enter array elements
    }
    int largest=arr[0];                                                             // declare variable
    for(int i=0;i<size;i++)                                                     // loop run until i less than size
    {
        if(arr[i]>largest)                                                      // check condition where arr[i] value greter than largest 
        {
            largest=arr[i];                                                     // store arr[i] in largest variable
        }
    }
    printf("Largest element is : %d",largest);                                  // print largest element in array
}