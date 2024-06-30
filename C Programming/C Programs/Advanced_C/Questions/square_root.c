#include<stdio.h>
int main()
{
     float a,b,c;
     printf("Enter a Number:");
     scanf("%f",&a);
     if(a<2)
     {
        printf("Square root of %g is %g",a,a);
     }
     else{
        b=a;
        c=(b+(a/b))/2;
        while (b-c>=0.00001)
        {
            b=c;
            c=(b+(a/b))/2;

        }
        printf("Square root of %g is %g",a,c);
        
     }
}