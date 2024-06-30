#include <stdio.h>
struct Car
{
    int model;
    char name[50];
    char c_name[50];
    
};
void getdata(struct Car *s)
{
    printf("\t******** Car Details *********\n");
    printf("\tEnter Your Car Model:");
    scanf("%d", &s->model);
    printf("\tEnter Your Car Name:");
    scanf("%s", s->name);
    printf("\tEnter Your Car Company name:");
    scanf("%s", s->c_name);
}
void print(struct Car s)
{
    printf("\n\t******** Your Car Information *******\n");
    printf("\tYour Car Model Is :%d\n", s.model);
    printf("\tYour Car Name Is :%s\n", s.name);

    printf("\tYour Car Company name Is :%s\n", s.c_name);
}
int main()
{
    struct Car s;
    getdata(&s);
    print(s);
}