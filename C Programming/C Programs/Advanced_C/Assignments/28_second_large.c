/*
Name:Ashutosh Uday Zende
Date:19/12/2023
DESCRIPTION:A28 - WAP to find 2nd largest element in an array
SAMPLE I/P:Enter the size of the Array : a
SAMPLE O/P:Enter the elements into the array: 5 1 4 2 8
*/

#include <stdio.h>
int sec_largest(int *arr, int *size) // function declaration
{
    int largest = arr[0];           // vatiable declare
    int s_largest = arr[1];         // variable declare
    for (int i = 0; i < *size; i++) // loop run until i less than size
    {
        if (arr[i] > largest) // check condition
        {
            s_largest = largest; // largest store in s_largest
            largest = arr[i];    // arr[i] value store in largest
        }
        else
        {
            if (arr[i] > s_largest && arr[i] < largest) // check condition
            {
                s_largest = arr[i]; // arr[i] stores in s_largest
            }
        }
    }
    return s_largest; // return s_largest
}
int main()
{
    int size, ret; // variable declare

    // Read size from the user
    printf("Enter the size of the array : "); // user primpt
    scanf("%d", &size);                       // user input

    int arr[size];                                 // array declare
    printf("Enter the elements into the array: "); // user prompt
    for (int i = 0; i < size; i++)                 // loop run until i less than size
    {
        scanf("%d", &arr[i]); // input the array element
    }

    // Read elements into the array

    // funtion call
    ret = sec_largest(arr, &size); // call the function and store the ret variable

    printf("Second largest element of the array is %d\n", ret); // print value
}