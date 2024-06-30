#include<stdio.h>
int binary_recursive(int *arr,int size,int key,int first,int last)
{
     if (first > last)  
     {
        return 0;
     }
    int mid=(first+last)/2;
    if(key==arr[mid])
    {
       return mid;
    }else if(key < arr[mid])
    {
      return binary_recursive(arr,size,key,first,mid-1);
    }else
    {
      return binary_recursive(arr,size,key,mid+1,last);
    }
    
}
int main()
{
int size;
printf("Enter  the number of elements you want in array:");
scanf("%d",&size);
int arr[size];
printf("\nEnter %d integers for array :\n",size);
for(int i=0;i<size;i++) 
{
    printf("Element%d = ",i);
    scanf("%d",&arr[i]);
}
int key;
printf("Enter key which you find:");
scanf("%d",&key);
int value=binary_recursive(arr,size,key,0,size-1);
printf("Position of the element  is=%d",value);
}