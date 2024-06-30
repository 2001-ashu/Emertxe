#include<stdio.h>
int main()
{
        int size;
        printf("Enter size of array:");
        scanf("%d",&size);
        int arr[size],i,j;
        printf("Array elements are:");
        for(i=0;i<size;i++)
        {
                scanf("%d",&arr[i]);
        }
        printf("Repeated elements are:");
        for(i=0;i<size;i++)
        {
                for(j=i+1;j<size;j++)
                {
                        if(arr[i]==arr[j])
                        {
                                printf("%d ",arr[j]);
                        }
                }
        }

        return 0;
}
