/*
Name:Ashutosh Uday Zende
Date:18/12/2023
Description:A27 - WAP to find 3rd largest element in an array
sample i/p:Enter the size : 5
           Enter the array elements : 1 2 3 4 5
sample o/p: Third largest element of the array is  3
*/
#include <stdio.h>

int third_largest(int *arr, int *size)                                          // Function declaration

{
     int largest = arr[0];                                                      //variable declare
        int s_largest = arr[1];                                                  //variable declare
        int t_largest = arr[3];                                                  //variable declare

    for (int i = 0; i < *size; i++)                                             // loop run until i less than size
    {
       

        if (arr[i] > largest)                                                   //check condition
        {
            t_largest = s_largest;                                              //store t_largest in s_largest
            s_largest = largest;                                                //store s_largest in largest
            largest = arr[i];                                                   ////store largest in arr[i]
        }
        else if (arr[i] > s_largest && arr[i] < largest)                        // check condition
        {
            t_largest = s_largest;                                              //store t_largest in s_largest
            s_largest = arr[i];                                                 //store s_largest in arr[i]
        }
        else
        {
            if (arr[i] > t_largest && arr[i] < s_largest)                       //check condition
            {
                t_largest = arr[i];                                             ////store t_largest in arr[i]
            }
        }
    }
         return t_largest;                                                      //return value
    
}

int main()
{
    int size, ret;                                                              // variable initialise

    // Read size from the user
    printf("Enter the size of the array : ");                                    //user prompt
    scanf("%d", &size);                                                         //user input

    int arr[size];                                                              //array initialise with size
    printf("Enter the elements into the array: ");                              //user prompt
    for (int i = 0; i < size; i++)                                              //loop run until i less than size
    {
        scanf("%d", &arr[i]);                                                   //array element
    }

    // Read elements into the array

    // funtion call
    ret = third_largest(arr, &size);                                            //function call and value stored in ret variable

    printf("Third largest element of the array is %d\n", ret);                  //print the value
}
