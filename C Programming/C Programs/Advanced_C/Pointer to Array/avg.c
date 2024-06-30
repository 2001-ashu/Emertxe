#include <stdio.h>
float avg(int r, int c, int (*ptr)[c])
{
    float sum = 0;
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            printf("Arr[%d][%d]:", i, j);
            scanf("%d", &ptr[i][j]);
        }
    }
    printf("===================\n");
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {

            printf("%d ", ptr[i][j]);
            sum = sum + ptr[i][j];
        }
        printf("\n");
    }
    printf("sum ----> %f\n", sum);

    float avg = sum / (r * c);
    return avg;
}
int main()
{
    int r, c;
    printf("Enter rows and column value:");
    scanf("%d%d", &r, &c);
    int arr[r][c];
    printf("Average of all Elements are:%g", avg(r, c, arr));
}