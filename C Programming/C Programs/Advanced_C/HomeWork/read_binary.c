#include<stdio.h>
#include<math.h>
int main()
{
     int n,pos=0,dec=0,r;
     
     printf("Write binary Number:");
     scanf("%d",&n);
    while(n>0)
{
    r=n%10;
    dec=dec+r*pow(2,pos);
    pos++;
    n=n/10;
}
printf("Decimal Number is: %d",dec);
        
        
     

}