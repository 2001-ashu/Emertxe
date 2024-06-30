#include<stdio.h>
#define swap(type,x,y) { type temp = x; x = y; y = temp;}
int main()
{
    char str1[100];
    char str2[100];
    char *ptr1=str1;
    char *ptr2=str2;
    
    printf("Enter the first string: ");
    scanf( "%s", str1);
    
    printf("\nEnter the second string: ");
    scanf("%s", str2);
    swap(char*, ptr1, ptr2); 
    printf("After Swapping:");
    printf("String1:%s\n",ptr1);
    printf("String2:%s\n",ptr2);
}