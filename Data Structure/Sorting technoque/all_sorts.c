#include <stdio.h>

void merge(int *arr,int first,int last,int mid)

{
    int i,j,k,n1,n2;
    n1=mid-first+2;
    n2=last-mid+1;
    int larr[n1],rarr[n2];
    for(i=0;i<n1-1;i++)
    {
        larr[i]=arr[i+first];
    }
    for(j=0;j<n2-1;j++)
    {
        rarr[j]=arr[j+mid+1];
    }
    larr[i]=10000;
    rarr[j]=10000;
    i=0,j=0;
    for(k=first;k<=last;k++)
    {
        if(larr[i]<rarr[j])
        {
            arr[k]=larr[i];
            i++;
        }
        else{
            arr[k]=rarr[j];
            j++;
        }
    }
}


void merge_sort(int *arr,int first,int last)

{
    int mid=(first+last)/2;
    if(first<last)
    {
        merge_sort(arr,first,mid);
        merge_sort(arr,mid+1,last);
        merge(arr,first,last,mid);
    }
}
int partition(int *arr,int first,int last)
{
    int i,temp,pivot=arr[last],p_i=first;
    for(i=first;i<last;i++)
    {
        if(pivot>arr[i])
        {
            temp=arr[i];
            arr[i]=arr[p_i];
            arr[p_i]=temp;
            p_i++;
        }
    }
    temp=arr[i];
    arr[i]=arr[p_i];
    arr[p_i]=temp;
    return p_i;
}
void quick_sort(int *arr,int first,int last)
{
    if(first<last)
    {
        int p_i=partition(arr,first,last);
        quick_sort(arr,first,p_i-1);
        quick_sort(arr,p_i+1,last);
    }
}
void selection(int *arr,int size)
{
    int i,j,temp,min;
    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
void insertion(int *arr,int size)
{
    int i,j,key;
    for(i=1;i<size-1;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void print(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main() {
int size;
printf("Enter size:");
scanf("%d",&size);
int arr[size];
printf("Enter elements:\n");
for(int i=0;i<size;i++)
{
    printf("Arr[%d]:",i);
    scanf("%d",&arr[i]);
}
selection(arr,size);
print(arr,size);
printf("\n");
insertion(arr,size);
print(arr,size);
printf("\n");
quick_sort(arr,0,size-1);
print(arr,size);
printf("\n");
merge_sort(arr,0,size-1);
print(arr,size);
    return 0;
}