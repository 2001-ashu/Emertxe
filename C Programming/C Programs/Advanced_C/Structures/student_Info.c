#include <stdio.h>
struct student_Info
{
    char name[20];
    int id;
    char address[30];
    char module[30];
};

int main()
{

    struct student_Info s[5];
    printf("Enter Student Information..\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Student %d Details: \n", i + 1);
        printf("Enter Student Name :\n");
        scanf("%s", s[i].name);
        printf("Enter Student Id :\n");
        scanf("%d", &s[i].id);
        printf("Enter Student Adress :\n");
        scanf("%s", s[i].address);
        printf("Enter Student Module :\n");
        scanf("%s", s[i].module);
    }
    printf("\t****** Student Information: ******\n");
    for (int i = 0; i < 5; i++)
    {
        
        printf("Enter Student Name : %s\n", s[i].name);

        printf("Enter Student Id :%d\n", s[i].id);

        printf("Enter Student Adreess :%s\n", s[i].address);
        printf("Enter Student Module :%s\n", s[i].module);
        printf("***************************************\n");
    }
}