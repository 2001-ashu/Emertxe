#include<stdio.h>
int GCD(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}
int main()
{
     int a,b;
     printf("Enter Two Nos:");
     scanf("%d%d",&a,&b);
     printf("Answer is %d",GCD(a,b));

}