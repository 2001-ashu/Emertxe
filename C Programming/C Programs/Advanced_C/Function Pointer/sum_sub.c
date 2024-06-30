#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}

int oper (int (*f)(int,int),int a,int b)
{
    return f(a,b);
}
int main()
{
    int (*fptr)(int,int);
    fptr=add;
    printf("Addition of Two Nos:%d\n",oper(fptr,2,4));
    fptr=sub;
    printf("\nSubstraction of Two Nos:%d",oper(fptr,5,2));
}