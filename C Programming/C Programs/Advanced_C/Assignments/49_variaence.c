/*
Name:Ashutosh Uday Zende
Date:5/02/24
Description:Varience calculation with dynamic arrays
*/
#include <stdio.h>
#include <stdlib.h>


float sum_all_num(int *arr, int size)                                           // sum of all number
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
void cal_D(int *arr, int size, int mean)                                        //calculate d value
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] - mean;
    }
}
void d_square(int *arr, int size)                                               // calculate D Square
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * arr[i];
    }
}
int sum_of_d_square(int *arr, int size)                                         // Sum of D_square
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
void variance(int *arr, int size)                                               // Print Variance Function
{
    float a=sum_of_d_square(arr, size);
    printf("Variance is %f", a / (float)size);
}

int main()
{
    int size;
    printf("Enter the no.of elements : ");
    scanf("%d", &size);
    int *arr = malloc(size * sizeof(int));
    printf("Enter the %d elements:\n", size);

    for (int i = 0; i < size; i++)
    {
        printf("[%d] -> ", i);
        scanf("%d", &arr[i]);
    }

    float mean = sum_all_num(arr, size) / (float)size;
    
    cal_D(arr, size, mean);                                                     // call cal_D function
    d_square(arr, size);                                                        //call d_square function
    variance(arr,size);                                                         // call variance function
}