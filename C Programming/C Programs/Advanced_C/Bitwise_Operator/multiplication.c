#include <stdio.h>
int mul(int a,int b)
{
    int res=0;
    while(b!=0)
    {
        if(b&1)
        res=res+a;
        a=a<<1;
        b=b>>1;
    }
    return res;
}
int main() {
    // Write C code here
int a=5,b=5;
printf("%d",mul(a,b));

    return 0;
}