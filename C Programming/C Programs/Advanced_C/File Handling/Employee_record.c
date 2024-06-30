#include<stdio.h>
int main()
{
     FILE *ptr=fopen("emp.txt","w+");
     char name[20];
     int age;
     int salary;
     if(ptr==NULL)
     {
        printf("File does not Exist");
        return 1;
     }
    
       
     printf("Enter Employee Name : \n");
     scanf("%s",name);
     fprintf(ptr,"Employee Name : %s\n",name);
     printf("Enter Employee Age : \n");
     scanf("%d",&age);
     fprintf(ptr,"Employee Age : %d\n",age);
     printf("Enter Employee Salary : ");
     scanf("%d",&salary);
     fprintf(ptr,"Employee Salary : %d\n",salary);
     fclose(ptr);
     printf("Display The Data:");
     FILE *ptr1=fopen("emp.txt","r");
     char ch1;
     while ((ch1=fgetc(ptr1))!=EOF)
     {
      printf("%c",ch1);
     }
     fclose(ptr1);
     
    
      

}