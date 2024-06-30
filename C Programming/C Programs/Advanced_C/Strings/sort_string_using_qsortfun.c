#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int sa(const void *a,const void *b)
{
    return strcmp(a,b);
}
void print(char (*arr)[20],int size)
{
    for (int i = size-1; i >=0; i--)
    {
        printf("%s ",arr[i]);
    }
    
}

int main()
{
     char arr[5][20]={"Nitin","Mahesh","Ashu","Sanjay","Darpan"};
     qsort(arr,5,20,sa);
     printf("Ascendding Strings:");
     for (int i = 0; i < 5; i++)
     {
        printf("%s ",arr[i]);
     }
     printf("\nDescending :");
     print(arr,5);
     
}