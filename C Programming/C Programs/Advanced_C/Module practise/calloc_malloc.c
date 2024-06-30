#include <stdio.h>
#include <stdlib.h>
int main()
{
        int *m;
        m = malloc(5 *sizeof(int)); // dynamic memory allocation for 5 integers

    int *n;
    n = calloc(5 , sizeof(int)); 
    printf("\nElements in the array are: Malloc \n");
    for (int j = 0; j < 5; j++)
    {
        printf("%d ", m[j]);   
    }
     printf("\nElements in the array are: Calloc\n");
    for (int j = 0; j < 5; j++)
    {
        printf("%d ", n[j]);   
    }
}