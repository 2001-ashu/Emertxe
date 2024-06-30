/*
Name:Ashutosh Uday Zende
Date:10/02/24
Description:WAP read out entries by the previous program
*/
#include<stdio.h>
struct student_Info{
    char name[20];
    int p,c,m;
};
int main()
{
    int num;
    printf("Enter the number of students : ");
    scanf("%d",&num);
    struct student_Info s[num];
    for(int i=0;i<num;i++)
    {
        printf("Enter the name of the student : ");
        scanf("%s",s[i].name);
        printf("Enter P,C and M marks : ");
        scanf("%d%d%d",&s[i].p,&s[i].c,&s[i].m);
    }
    float s_p=0,s_c=0,s_m=0;
    FILE *ptr=fopen("students_record_entry.out","w");
    fprintf(ptr,"-------------------------------------\n");
    fprintf(ptr,"Name\tMaths\tPhysics\tChemistry\n");
    fprintf(ptr,"-------------------------------------\n");
    for(int i=0;i<num;i++)
    {
        fprintf(ptr,"%s\t%d\t%d\t%d\n",s[i].name,s[i].m,s[i].p,s[i].c);
        s_p=s_p+s[i].p;
        s_c=s_c+s[i].c;
        s_m=s_m+s[i].m;
    }
    float a_p=s_p/(float)num;
    float a_m=s_m/(float)num;
    float a_c=s_c/(float)num;
    fprintf(ptr,"-------------------------------------\n");
    fprintf(ptr,"Average\t%g\t%g\t%g\n",a_m,a_p,a_c);
    fprintf(ptr,"-------------------------------------\n");
    fclose(ptr);
    FILE *ptr1=fopen("students_record_entry.out","r");
    FILE *ptr2=fopen("read_students_record.out","a");
    char ch;
    while((ch=fgetc(ptr1))!=EOF)
    {
        putc(ch,ptr2);
    }
    fclose(ptr2);
        FILE *ptr4=fopen("read_students_record.out","r");

    char p;
    while ((p=fgetc(ptr4))!=EOF)
    {
        printf("%c",p);
    }
    
   fclose(ptr1);



    
    
}