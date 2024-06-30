#include<stdio.h>
int GCD(int a,int b)
{
    if(b)
    {
       return GCD(b,a % b); 
    }
    else{
        
        return a;
    }
}
int main()
{
     int a,b;
     printf("Enter two nos:");
     scanf("%d%d",&a,&b);
     printf("GCD of %d and %d no is:%d",a,b,GCD(a,b));

}