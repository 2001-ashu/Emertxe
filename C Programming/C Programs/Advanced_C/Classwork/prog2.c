#include <stdio.h>
int main()
{
    int p;
    printf("Enter the percentage : ");
    scanf("%d", &p);
    if (p > 100)
    {
        printf("Error : Please enter the percentage less than or equal to 100.");
    }
    if (p > 90)
    {
        if (p < 100)
        {
            printf("The Grade is A");
        }
    }
    else if (p > 70)
    {
        if (p < 91)
        {
            printf("The Grade is B");
        }
    }
    else if (p > 50)
    {
        if (p < 71)
        {
            printf("The grade is C");
        }
    }

    else
    {
        printf("The Grade is F");
    }
    return 0;
}