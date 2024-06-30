/*
Name:Ashutosh Zende
Date:10/02/2024
Title:WAP to find the product of given matrix.
 */
#include <stdio.h>
#include <stdlib.h>

int matrix_mul(int, int, int *fsd[], int, int, int *scd[], int *resul[], int, int); // Function Declaration

int main()
{
    int **mat_a, **mat_b, **result, row1, col1, row2, col2, i, j, c1, r1;

     printf("Enter number of rows :");
    scanf("%d", &row1);

     printf("Enter number of rows :");
    scanf("%d", &col1);

    mat_a = (int **)malloc(row1 * sizeof(int*)); // Allocating memory

    for (i = 0; i < row1; i++)
    {
        mat_a[i] = (int *)malloc(col1 * sizeof(int));
    }

     printf("Enter values for %d x %d matrix :\n",row1,col1);
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
             scanf("%d", (*(mat_a + i) + j)); // Reading element(matrix 1)
                  //      scanf("%d", mat_a[i][j]); // Reading element(matrix 1)

        }
    }

     printf("Enter number of rows :");
    scanf("%d", &row2);

     printf("Enter number of rows :");
    scanf("%d", &col2);

    if (col1 == row2)
    {

        mat_b = (int **)malloc(row2 * sizeof(int*));

        for (i = 0; i < row2; i++)
        {
            mat_b[i] = (int *)malloc(col2 * sizeof(int));
        }

         printf("Enter values for %d x %d matrix :\n",row2,col2);
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < col2; j++)
            {
                scanf("%d", (*(mat_b + i) + j)); // Reading element(matrix 2)
            }
        }

        result = (int **)malloc(row1 * sizeof(int*));

        for (i = 0; i < row1; i++)
        {
            result[i] = (int *)malloc(col2 * sizeof(int));
        }

        matrix_mul(col1, row1, mat_a, col2, row2, mat_b, result, r1, c1);                 // Function callig

        printf("Product of two matrix :\n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col2; j++)
            {
                printf("%d ", ((result + i) + j)); // Output
            }
            printf("\n");
        }
        printf("\n");
    }
    else
        printf("Matrix multiplication is not possible\n");

    return 0;
}
int matrix_mul(int col1, int row1, int *fst[], int col2, int row2, int *scd[], int *result[], int r1, int c1)
{
    int i, j, k, p, sum;

    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            for (k = 0; k < col1; k++)
            {
                result[i][j] += (scd[k][j] * fst[i][k]);
            }
        }
    }
}