#include <stdio.h>
int main()
{
    static int fact=1;
    static int n=5;
    if(fact==1){
    printf("Enter a  no.");
    scanf("%d", &n);
    }
    if (n > 1)
    {
        fact = fact * n;
        --n;
        main();
    }
    else{
    printf("The Factorial is:%d", fact);
    }
}
