#include<stdio.h>
int noncommon(int *arr1,int *arr2,int size)
{
        int i,j,flag = 0;
        int arr3[100],k = 0;
        for(i = 0; i < size; i++)
        {
                flag = 0;
                for(j = 0 ; j < size ; j++)
                {
                        if(arr1[i] == arr2[j])
                        {
                                flag = 1;
                                break;
                        }
                }
                if(flag == 0)
                {
                        arr3[k] = arr1[i];
                        k++;
                }
        }
        for(i = 0; i < size; i++)
        {
                flag = 0;
                for(j = 0 ; j < size ; j++)
                {
                        if(arr2[i] == arr1[j])
                        {
                                flag = 1;
                                break;
                        }
                }
                if(flag == 0)
                {
                        arr3[k] = arr2[i];
                        k++;
                }
        }
    printf("Third Array Elements:\n");
        for(i =0; i < k ; i++)
        {
                printf("%d\n",arr3[i]);
        }
}

int main()
{
        int size,i;
        printf("Enter the size of array:");
        scanf("%d",&size);
        int arr1[size],arr2[size];
        printf("Enter the arr1: ");
        for( i = 0;i < size ; i++)
        {
                scanf("%d",&arr1[i]);
        }
        printf("Enter the arr2: ");
        for( i = 0;i < size ; i++)
        {
                scanf("%d",&arr2[i]);
        }
        noncommon(arr1,arr2,size);
        return 0;
}