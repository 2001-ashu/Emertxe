#include<stdio.h>
int mirror(int *arr1,int *arr2,int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr1[i]!=arr2[size-i-1])
        {
            return 0;
        }

    }
}
int main()
{
     int size1;
    printf("Enter the size1:");
    scanf("%d", &size1);
    int arr1[size1];
    printf("1Array Elements are:\n");
    for (int i = 0; i < size1; i++)
    {
        printf("arr1[%d]:", i);
        scanf("%d",&arr1[i]);
    }
     int size2;
    printf("Enter the size2:");
    scanf("%d", &size2);
    int arr2[size2];
    printf("2Array Elements are:\n");
    for (int i = 0; i < size2; i++)
    {
        printf("arr2[%d]:", i);
        scanf("%d",&arr2[i]);
    }
    if(mirror(arr1,arr2,size1))
    {
        printf("It is mirror array");
    }
    else{
        printf("It is not mirror array");
    }
}