#include<stdio.h>
int toggle(int num,int pos,int n)
{
    int val=num^((1<<n)-1)<<(pos-n+1);
    return val;
}
int main()
{
    int num=10,pos=5,n=3;
    int k=toggle(num,pos,n);
    printf("%d",k);
}