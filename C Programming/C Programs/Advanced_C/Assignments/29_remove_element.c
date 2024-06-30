
/*
Name:Ashutosh Uday Zende
Date:22/12/2023
Description:WAP to remove duplicate elements in a given array
Sample i/p:Enter the size: 5
Sample o/p:2 1 1 1 1 5
*/
#include <stdio.h>

void fun(int *arr1, int *arr2, int *size, int *new_size) // function declaration
{
    int i, j; // variable initialisation and declaration

    for (i = 0; i < size; i++) // loop run until i less than size
    {

        for (j = 0; j < *new_size; j++)
        {
            if (arr1[i] == arr2[j]) // check condition
            {

                break;
            }
        }

        if (j == *new_size) // check condition
        {
            arr2[(*new_size)++] == arr1[i];
        }
    }
}

int main()
{
    int size;                   // variable initialise
    printf("Enter the size: "); // user prompt
    scanf("%d", &size);
    int arr1[size], arr2[size], nsize = 0;     // array declare
    printf("Enter elements into the array: "); // user prompt
    for (int i = 0; i < size; i++)             // loop run until i less than size
    {
        scanf("%d", &arr1[i]); // array elemnts
    }
    fun(arr1, size, arr2, &nsize);         // function call
    printf("after removing duplicates: "); // User prompt
    for (int i = 0; i < nsize; i++)
    {
        printf("%d", arr2[i]);
    }
}
