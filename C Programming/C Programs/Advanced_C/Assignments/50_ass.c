#include<stdio.h>
int fun(int *value,int size)
{
    char *ptr=(char *)value;
    for (int i = 0; i < size/2; i++)
    {
        int temp=ptr[i];
        ptr[i]=ptr[size-i-1];
        ptr[size-i-1]=temp;
    }
    
}
int main()
{
    int size;
    int v;
    printf("Enter the size: ");
    scanf("%d",&size);
    printf("Enter any number in Hexadecimal: ");
    scanf("%X",&v);
    printf("After conversion ");
    fun(&v,size);
    printf("%X",v);

}