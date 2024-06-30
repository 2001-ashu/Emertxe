#include<stdio.h>
int main()
{
     int n1,n2;
     printf("Enter size of 1st array:");
     scanf("%d",&n1);
      printf("Enter size of 2nd array:");
     scanf("%d",&n2);
     int a[n1],b[n2];
     printf("Array 1st Elements are: ");
     for(int i=0;i<n1;i++)
     {
        scanf("%d",&a[i]);
     }
       printf("\nArray 2nd Elements are: ");
     for(int i=0;i<n2;i++)
     {
        scanf("%d",&b[i]);
     }
     printf("\nIntersection:  ");
     for(int i=0;i<n2;i++)
     {
        for(int j=0;j<n1;j++)
        {
            if(a[i]==b[j] )
            {
                printf("%d ",a[i]);
            }
        }
     }

}