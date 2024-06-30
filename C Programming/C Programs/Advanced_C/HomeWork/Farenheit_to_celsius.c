#include<stdio.h>
float F_to_C(float *n)
{
    return (*n-32) *5/9;
}
int main()
{
   float n;
   printf("Enter a Number:");
   scanf("%f",&n);
   printf("%g farenheit is converted to Degree celcius is %g",n,F_to_C(&n));
return 0;
}

