#include<stdio.h>
int s; // Globally declared
void delete_by_index(int arr[],int index)
{
    // Delete index value  
    int i;
    for(i=index;i<s;i++)
    {
        arr[i]=arr[i+1];
        s=s-1;
    }
}
void delete_by_value(int arr[],int value)
{   
    int j=0;
    for(int i=0;i<s;i++)
    {
        if(arr[i]==value)
        {
            arr[i]=arr[i+1];
            s--;
        }
    }
}

void print_array(int arr[])
{
      for(int i=0;i<s;i++)
        {
            printf("%d ",arr[i]);
        } 
}
int main()
{
    int index,value,c;
    printf("Enter size of array:");
    scanf("%d",&s);
    int arr[s];
    for (int i = 0; i < s; i++)
    {
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter Your Choice:\n 1.Delete By Index.\n 2.Delete By Value\n");
    scanf("%d",&c);
    if(c==1)
    {
        printf("Enter the index value to be deleted:");
        scanf("%d",&index);
        delete_by_index(arr,index);
        printf("After Deleting Elements:");
    }
    else if(c==2)
    {
        printf("Enter the Array value to be deleted:");
        scanf("%d",&value);
        delete_by_value(arr,value);
        printf("After Deleting Elements:");
      
    }
    print_array(arr);

  
}