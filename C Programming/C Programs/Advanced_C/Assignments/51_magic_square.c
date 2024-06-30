#include<stdio.h>
#include<stdlib.h>
void magic_square(int **arr, int size)
{
    int rows = 0, cols = size / 2, p_row, p_col;
    int num = 1;
    for (int i = 1; i <= size * size; i++)
    {
        if (arr[rows][cols] == 0)
        {
            arr[rows][cols] = num;
            p_row = rows;
            p_col = cols;
            num++;
        }
        else
        {
            rows = ++p_row;
            cols = p_col;
            {
                arr[rows][cols] = num;
                num++;
            }
        }
        rows--;
        cols++;
        if (rows < 0)
        {
            rows = size - 1;
        }
        if (cols > size - 1)
        {
            cols = 0;
        }
    }
}

int main()
{
    int size;
    printf("Enter a number:");
    scanf("%d", &size);
    if (size % 2 != 0 && size > 0)
    {
        int **arr = (int **)malloc(size * sizeof(int *));
        for (int i = 0; i < size; i++)
        {
            arr[i] = (int *)calloc(size, sizeof(int));
        }
        magic_square(arr, size);
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Error : Please enter only positive odd numbers");
    }
    return 0;
}