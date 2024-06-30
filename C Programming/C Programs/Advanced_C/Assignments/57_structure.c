#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct student_info
{
    char name[50];
    int roll_no;
    char sub[50];
    int *marks;
    float avg;
    char grade;

} stud;
void getdata(stud *s, int num, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the name of subject %d : ", i + 1);
        scanf("%s", s[i].sub);
    }
    for (int i = 0; i < num; i++)
    {

        printf("----------Enter the student datails-------------\n");
        printf("Enter the student Roll no. : ");
        scanf("%d", &s[i].roll_no);
        printf("Enter the student %d name : ", i + 1);
        scanf("%s", s[i].name);
        s[i].marks = malloc(size * sizeof(int));
        for (int j = 0; j < size; j++)
        {
            printf("Enter %s mark : ", s[j].sub);
            scanf("%d", &s[i].marks[j]);
        }
    }
}
void student_details(stud *s, int num, int size)
{

    for (int i = 0; i < num; i++)
    {
        printf("---------------- Student datails -------------\n");
        printf("Enter the student Roll no. : %d\n", s[i].roll_no);

        printf("Enter the student %d name : %s\n", i + 1, s[i].name);

        for (int j = 0; j < size; j++)
        {
            printf("Enter %s mark : %d\n", s[j].sub, s[i].marks[j]);
        }
    }
}
void particular_student(stud *s, int num, int avg, int size)
{

    int roll;
    char new[50];
    for (int i = 0; i < size; i++)
    {
        s[i].avg = (float)(sum1(s, i, size)) / size;
    }

    for (int i = 0; i < size; i++)
    {
        if (s[i].avg >= 90 && s[i].avg <= 100)
        {
            s[i].grade = 'A';
        }
        else if (s[i].avg >= 80 && s[i].avg <= 90)
        {
            s[i].grade = 'B';
        }
        else if (s[i].avg >= 70 && s[i].avg <= 80)
        {
            s[i].grade = 'C';
        }
        else
        {
            s[i].grade = 'D';
        }
    }

    int c;

    printf("----Menu for Particular student----\n1. Name.\n2. Roll no.\nEnter your choice : \n");
    scanf("%d", &c);

    if (c == 1)
    {
        char new[50];
        printf("Enter the name of the student : ");
        scanf("%s", new);

        for (int i = 0; i < num; i++)
        {
            if (!(strcmp(new, s[i].name)))
            {
                printf("Roll No.\tName\t");
                for (int j = 0; j < size; j++)
                {
                    printf("%s\t", s[j].sub);
                }
                printf("Average\tGrade\n");

                printf("%d\t\t%s\t", s[i].roll_no, s[i].name);
                for (int k = 0; k < size; k++)
                {
                    printf("%d\t", s[i].marks[k]);
                }

                printf("%g\t", s[i].avg);

                printf("%c\n", s[i].grade);
            }
        }
    }
    else
    {
        if (c == 2)
        {
            printf("Enter the Roll No of the student : ");
            scanf("%d", &roll);
            for (int i = 0; i < num; i++)
            {
                if (roll == s[i].roll_no)
                {
                    printf("Roll No.\tName\t");
                    for (int j = 0; j < size; j++)
                    {
                        printf("%s\t", s[j].sub);
                    }
                    printf("Average\tGrade\n");

                    printf("%d\t\t%s\t", s[i].roll_no, s[i].name);
                    for (int k = 0; k < size; k++)
                    {
                        printf("%d\t", s[i].marks[k]);
                    }

                    printf("%g\t", s[i].avg);

                    printf("%c\n", s[i].grade);
                }
            }
        }
    }
}
int sum1(stud *s, int num, int size)
{
    int sum = 0;

    for (int j = 0; j < size; j++)
    {
        sum = sum + s[num].marks[j];
    }

    return sum;
}

int main()
{
    int num, size;
    // int sum = 0;
    printf("Enter no.of students : ");
    scanf("%d", &num);
    stud s[num];

    printf("Enter no.of subjects : ");
    scanf("%d", &size);
    getdata(s, num, size);
    char m = 'y';
    int ch;

    while (m == 'y' || m == 'Y')
    {
        printf("----Display Menu----\n");
        printf("1. All student details\n2. Particular student details\nEnter your choice : \n");
        scanf("%d", &ch);
        if (ch == 1)
        {
            student_details(s, num, size);
        }
        else
        {
            if (ch == 2)
            {

                particular_student(s, num, 0, size);
            }
        }
        printf("Do you want to continue (Y=Yes/N=No):");
        scanf(" %c", &m);
    }
    return 0;
}