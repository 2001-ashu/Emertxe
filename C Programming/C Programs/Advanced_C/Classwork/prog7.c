#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter the Two numbers : ");
    scanf("%d %d",&a,&b);
    printf("Enter the operator : ");
    scanf( " %c",&op);
    switch (op)
    {
        case '+':
        printf("The Result is : %d\n",a+b);
        break;
         case '-':
        printf("The Result is : %d\n",a-b);
        break;
         case 'x':
        printf("The Result is : %d\n",a*b);
        break;
         case '/':
        printf("The Result is : %d\n",a/b);
        break;
        default:
        printf("Invalid Operator");
        
    }
}