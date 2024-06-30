#include<stdio.h>
#include<stdlib.h>
int main()
{
     int size;
     float sum=0;
     printf("Enter Size:");
     scanf("%d",&size);
     int *ptr=malloc(size*sizeof(int));
     if(ptr==NULL)
     {
        printf("Memory not allocated\n");
        return 0;
     }
     else
     {
        printf("Memory allocated\n");
     }
     printf("Type Array Elements: \n");
     
        for(int i=0;i<size;i++)
        {
            printf("Arr[%d]:",i);
            scanf("%d",&ptr[i]);
        }
        printf("\nElements are:");
         for(int i=0;i<size;i++)
        {

            printf("%d ",ptr[i]);
            sum=sum+ptr[i];
            
        }
        float cal=sum/size;
        printf("\nAverage of array elements are: %g",cal);
       


     

}