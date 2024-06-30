#include <stdio.h>
#define swap(t,a,b) \
{\
t temp=a;\
a=b;\
b=temp;\
\
}
int main()
{
    int ch;
    int n1,n2;
    char c1,c2;
    short s1,s2;
    float f1,f2;
    double d1,d2;
    char str1[100],str2[100];
    printf("1. Int\n2. char\n3. short\n4. float\n5. double\n6. string\nEnter you choice : ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("Enter the num1 : ");
        scanf("%d",&n1);
        printf("Enter the num2 : ");
        scanf("%d",&n2);
        printf("After Swapping\n");
        swap(int,n1,n2);
        printf("num1 : %d\nnum2 : %d",n1,n2);


        break;
    case 2:
     printf("Enter the character 1 : ");
        scanf(" %c",&c1);
        printf("Enter the character 2 : ");
        scanf(" %c",&c2);
        printf("After Swapping\n");
        swap(char,c1,c2);
        printf("character 1 : %c\ncharater 2 : %c",c1,c2);

        break;
    case 3:
     printf("Enter the num1 : ");
        scanf("%hd",&s1);
        printf("Enter the num2 : ");
        scanf("%hd",&s2);
        printf("After Swapping\n");
        swap(short,s1,s2);
        printf("num1 : %hd\nnum2 : %hd",s1,s2);
    

        break;
    case 4:
     printf("Enter the num1 : ");
        scanf("%f",&f1);
        printf("Enter the num2 : ");
        scanf("%f",&f2);
        printf("After Swapping\n");
        swap(float,f1,f2);
        printf("num1 : %f\nnum2 : %f",f1,f2);

        break;
    case 5:
     printf("Enter the num1 : ");
        scanf("%ld",&d1);
        printf("Enter the num2 : ");
        scanf("%ld",&d2);
        printf("After Swapping\n");
        swap(double,d1,d2);
        printf("num1 : %ld\nnum2 : %ld",1,n2);

        break;
    case 6:
        printf("Enter the string 1 : ");
        scanf("%s",str1);
        printf("Enter the string 2 : ");
        scanf("%s",str2);
        char *ptr1=str1;
        char *ptr2=str2;
        printf("After Swapping\n");
        swap(char *,ptr1,ptr2);
        printf("String 1 : %s\nString 2 : %s",ptr1,ptr2);


        break;

    default:
    printf("Invalid Input");
        break;
    }
}