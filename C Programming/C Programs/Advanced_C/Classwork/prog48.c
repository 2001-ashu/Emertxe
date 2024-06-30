/*
Name:Ashutosh Uday Zende
Date:08/02/24
Description:WAP to accept student record from user .Store all the data in as a binary file
*/
#include <stdio.h>
struct info
{
    char name[20];
    int p, c, m;
};

int main()
{

    FILE *ptr = fopen("students_record_entry.out", "w+");
    FILE *ptr1 = fopen("read_students_record.out", "w");
    int num;

    int p, c, m;
    printf("Enter the number of students : ");
    scanf("%d", &num);
    struct info s[num];
    float s_p = 0, s_c = 0, s_m = 0;

    for (int i = 0; i < num; i++)
    {
        printf("Enter name of the students : ");
        scanf("%s", s[i].name);

        printf("Enter P, C and M marks : ");
        scanf("%d%d%d", &s[i].p, &s[i].c, &s[i].m);
        s_p = s_p + s[i].p;
        s_c = s_c + s[i].c;
        s_m = s_m + s[i].m;
    }
    float a_p = s_p / (float)num;
    float a_c = s_c / (float)num;
    float a_m = s_m / (float)num;

    fprintf(ptr, "------------------------------------------------\n");
    fprintf(ptr, "Name\tMaths\tPhysics\tChemistry\n");
    fprintf(ptr, "------------------------------------------------\n");
    for (int i = 0; i < num; i++)
    {
        fprintf(ptr, "%s\t%d\t%d\t%d\n", s[i].name, s[i].m, s[i].p, s[i].c);
    }
    fprintf(ptr, "------------------------------------------------\n");

    fprintf(ptr, "Average\t%g\t%g\t%g\n", a_m, a_p, a_c);
    fprintf(ptr, "------------------------------------------------\n");

   char ch;
    while ((ch = fgetc(ptr)) != EOF)
    {
        fputc(ch,ptr1);
    }
}