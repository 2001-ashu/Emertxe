/*
Name:Ashutosh Uday Zende
Date:29/11/2023
Description:WAP to find day of the year

*/
#include <stdio.h>
int main()
{
    int n, choice;
    printf("Enter the value of 'n' :");
    scanf("%d", &n);
    if (n == 0 || n > 365)
    {
        printf("Error: Invalid Input, n value should be > 0 and <= 365");
        return 0;
    }

    printf("Choose First Day :\n1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\n");
    printf("Enter the option to set the first day :");
    scanf("%d", &choice);
    if (choice == 0)
    {
        printf("Error: Invalid input, first day should be > 0 and <= 7\n");
        return 0;
    }
    // int cal=n%7;
    int op = (n + choice - 1) % 7;

    switch (op)
    {
    case 1:
        printf("The day is Sunday");
        break;
    case 2:
        printf("The day is Monday");
        break;
    case 3:
        printf("The day is Tuesday");
        break;
    case 4:
        printf("The day is Wednesday");
        break;
    case 5:
        printf("The day is Thursday");
        break;
    case 6:
        printf("The day is Friday");
        break;
    case 0:
        printf("The day is Saturday");
        break;
    default:
        printf("Error: Invalid input, first day should be > 0 and <= 7\n");
    }
}
