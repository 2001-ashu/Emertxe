#define _GNU_SOURCE
#include <stdio.h>
typedef struct Student_data
{
    char name[20];
    int roll_no;
    char module[10];
    char div[5];

} stud;

void get_data(stud *s1, FILE *ptr,int n)
{
    for (int i = 0; i < n; i++)
    {

        printf("Enter %d Student Data :\n", i);
        printf("Enter Student Name : ");
        scanf("%s", s1[i].name);
        fprintf(ptr, "Student Name :%s\n", s1[i].name);
        printf("Enter Student Roll No : ");
        scanf("%d", &s1[i].roll_no);
        fprintf(ptr, "Student Roll_No :%d\n", s1[i].roll_no);
        printf("Enter Student Module : ");
        scanf("%s", s1[i].module);
        fprintf(ptr, "Student Module :%s\n", s1[i].module);
        printf("Enter Student Division : ");
        scanf("%s", s1[i].div);
        fprintf(ptr, "Student Division :%s\n", s1[i].div);
        fprintf(ptr,"------------------------------------------");

    }
}
void display(FILE *ptr1)
{
    
    if(ptr1==NULL)
    {
        fprintf(stderr,"Can't open file..");
       
    }
     char ch;
    while ((ch = fgetc(ptr1)) != EOF)
    {
        printf("%c",ch);

        
    }
     
}

int main()
{
    FILE *ptr = fopen("Student_data.txt","a+");
    FILE *ptr1 = fopen("Student_data.txt","r");
    int n;
    printf("Enter number of student : \n");
    scanf("%d",&n);
    stud s1[n];
    int ch;
    while (1)
    {

        printf("\n1.Add Student Data\n2.Display Student Data\n3.Exit the Program\nEnter Your Choice :\n");
        scanf("%d", &ch);
        if (ch == 1)
        {
            get_data(s1,ptr,n);
        }
        else if (ch == 2)
        {
            display(ptr1);
        }
        else
        {
            break;
        }
    }
}