#include<stdio.h>
#define greatest(a,b) a>b?a:b
int main()

{
int a,b;
printf("Enter Two Nos:");
scanf("%d%d",&a,&b);
printf("%d",greatest(a,b));     
}