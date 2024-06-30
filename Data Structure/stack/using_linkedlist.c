#include<stdio.h>
#include<stdlib.h>
typedef struct ll
{
    int data;
    struct ll *link;

}stack;
stack *top=NULL;
int push(int **top,int data)
{
    stack *node=(stack*)malloc(sizeof(stack));
    if(node==NULL)  
    {
        printf("Memory is not allocated\n");
        return 0;
    }
    node->data=data;
    node->link=NULL;
    *top=node;
    printf("Insert successfully\n");
    return 0;
}
void pop(int **top)
{
    if(*top == NULL)
    {
        printf("Stack is Empty\n");
        return 0;
    }
    stack *temp=*top;
    *top=temp->link;
    free(temp);
    printf("Delete Successfully\n");
}
void  display(int *top)
{
    stack *temp=*top;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
}

int main()
{
    int ch,x;
    stack *top=NULL;
    while(1)
    {
        printf("\nMenu\n");
        printf("1.Push \n2.Pop \n3.Display \n4.Exit ");
        printf("\nEnter your choice : ");
        scanf( "%d",&ch);
        switch (ch)
        {
            case 1: 
            printf("Enter element which you want to add in stack:");
            scanf("%d",&x);
            push(&top,x);
            break;

            case 2:
            pop(&top);
            break;
            
            case 3:
            display(top);
            break;

            default:printf("\nExiting the program...\n");
                   return 0;

        }
    }
}