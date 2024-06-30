
/*
Name:Ashutosh Zende
Date: 6/2/2024
Title: Provide a menu to manipulate or display the value of variable of type t
Sample input:
Sample output:
 */
#include <stdio.h>
#include <stdlib.h>

void menu(int *);                                                               //menu function
void add(int *);                                                                // add function
void rem();                                                                     // remove function
void display(int *);                                                            //display function

int c1flag = 0, c2flag = 0, shflag = 0, intflag = 0, fflag = 0, dflag = 0;      // global variable 

int main()
{
    void *ptr;

    ptr = (int *)malloc(8);

    menu(ptr);                                                                  // call menu function

    return 0;
}

void menu(int *ptr) // menu function                                            // menu defination

{
    int choise;

    while (1)
    {

        printf("Menu :\n1. Add element\n2. Remove element\n3. Display element\n4. Exit from the program\n");
        printf("Enter the menu choise : "); // choice menu
        scanf("%d", &choise);

        switch (choise) // for calling menu function
        {
        case 1:
            add(ptr);                                                           // call add function
            break;
        case 2:
            rem();                                                              // call remove function
            break;
        case 3:
            display(ptr);                                                       // call display function
            break;
        case 4:
            exit(0);                                                            // 
        default:
            printf("\nGive corret choise\n");
            break;
        }

        printf("\n");
    }
}

void add(int *ptr) // function for Enter elements                               // define add
{
    int choise;

    printf("\nEnter the type you have to insert:\n1. char\n2. short int\n3. int\n4. float\n5. double\n");
label1:
    printf("Choise:");
    scanf("%d", &choise);

    switch (choise)
    {
    case 1:
        if (c1flag == 0 && dflag == 0)
        {
            printf("\nEnter the char1 :");
            scanf(" %c",(char *)ptr);
            c1flag = 1;
        }
        else if (c2flag == 0 && dflag == 0)
        {
            c2flag = 1;
            printf("\nEnter the char2 :");
            scanf(" %c",(char *)ptr + 1);
        }
        else
            printf("\nCharacter Memory is full\n");
        break;

    case 2:
        if (shflag == 0 && dflag == 0)
        {
            printf("\nEnter the short int :");
            scanf("%hd", (short int *)ptr + 1);
            shflag = 1;
        }
        else
            printf("\nShort Memory is full\n");
        break;

    case 3:
        if (intflag == 0 && fflag == 0 && dflag == 0)
        {
            printf("\nEnter the int :");
            scanf("%d",(int *)ptr + 1);
            intflag = 1;
        }
        else
            printf("\nInteger Memory is full\n");
        break;

    case 4:
        if (intflag == 0 && fflag == 0 && dflag == 0)
        {
            printf("\nEnter the float :");
            scanf("%g",(float *)ptr + 1);
            fflag = 1;
        }
        else
            printf("\nfloat Memory is full\n");
        break;

    case 5:
        if (c1flag == 0 && c2flag == 0 && shflag == 0 && intflag == 0 && fflag == 0 && dflag == 0)
        {
            printf("\nEnter the Double :");
            scanf("%lg",(double *)ptr);
            dflag = 1;
        }
        else
            printf("\nDouble Memory is full\n");
        break;
    default:
        printf("Press correct option\n");
        goto label1;
    }
}

void rem(int *ptr)                                                               // function remove
{
    int choise;

    printf("\nWhich memory you want to remove : \n1. char\n2. short int\n3. int\n4. float\n5. double\n");
    printf("Choise:");
    scanf("%d", &choise);

    switch (choise)
    {
    case 1:
        c1flag = 0;
        c2flag = 0;
        break;
    case 2:
        shflag = 0;
        break;
    case 3:
        intflag = 0;
        break;
    case 4:
        fflag = 0;
        break;
    default:
        dflag = 0;
        break;
    }
}
void display(int *ptr)                                                          // Fuction display elements
{
    printf("----------------------------------------\n");

    if (c1flag == 1)
        printf("0--> %c (char1)\n", *(char *)ptr);

    if (c2flag == 1)
        printf("1 --> %c  (char2)\n", *((char *)ptr + 1));

    if (shflag == 1)
        printf("1 --> %hd (short)\n", *((short int *)ptr + 1));

    if (intflag == 1)
        printf("1 --> %d (int)\n", *((int *)(ptr + 1)));

    if (fflag == 1)
        printf("1 --> %g (float)\n", *((float *)(ptr + 1)));

    if (dflag == 1)
        printf("0 --> %lg (double)\n", *(double *)ptr);

    printf("----------------------------------------\n");
}