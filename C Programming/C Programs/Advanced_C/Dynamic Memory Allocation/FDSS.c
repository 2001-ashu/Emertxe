#include <stdio.h>
#include <stdlib.h>
void read(int r,int c,int (*a)[c])
{
        
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Arr[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void print(int r,int c,int (*a)[c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int c=3;
    int (*a)[c];
    int r;
    printf("Enter Your Row Value:");
    scanf("%d", &r);
    a= malloc(r * sizeof(int));
    read(r,c,a);
    
    print(r,c,a);
    
}