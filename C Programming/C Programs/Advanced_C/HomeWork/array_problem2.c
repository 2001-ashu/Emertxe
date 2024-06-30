#include<stdio.h>
int main()
{
     int n,num,c=0,one,two;
     printf("Enter size:");
     scanf("%d",&n);
     int arr[n];
     for(int i=0;i<n;i++)
     {
        printf("arr[%d]",i);
        scanf("%d",arr[i]);
     }
     printf("Your Array is:");
      for(int i=0;i<n;i++)
     {
        printf("%d",arr[i]);
     }
     printf("Type a no:");
     scanf("%d",&num);
     for(int i=0;i<n;i++)
     {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
     }
     

}