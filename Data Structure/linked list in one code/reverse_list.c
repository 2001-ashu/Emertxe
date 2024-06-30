#include <stdio.h>
#include<stdlib.h>
typedef struct reverse
{
    int data;
    struct reverse *link;
} SLL;
int insert_beginning(SLL **head, int data)
{
    SLL *new = malloc(sizeof(SLL));
    if (new == NULL)
    {
        printf("Allocation not done.\n");
        return 0;
    }
    new->data = data;
    new->link = NULL;
    if (*head == NULL)
    {
        *head = new;
        return 0;
    }
    new->link = *head;
    *head = new;
    return 0;
}
int insert_end(SLL **head, int data)
{
    SLL *new = malloc(sizeof(SLL));
    if (new == NULL)
    {
        printf("Alloction is not done\n");
        return 0;
    }
    new->data = data;
    new->link = NULL;
   
    SLL *temp = *head;
    while (temp->link != NULL)
    {
     
        temp = temp->link;
    }
    temp->link=new;
    return 0;
}
int display(SLL *head)
{
    if (head == NULL)
    {
        printf("List is EMPTY..\n");
        return 0;
    }
    while(head)
    {
        printf("%d -> ", head->data);
        head = head->link;
    }
    printf("NULL\n");
    
}
int reverse_list(SLL **head)
{
    if(*head==NULL)
    {
        printf("List is empty..\n");
    return  0;
    }
    if((*head)->link==NULL)
    {
        printf("List Reversed..\n");
        return 0;
    }
    SLL *prev,*current,*next;
    current = *head;
    prev=NULL;
    next=NULL;
    while(current!=NULL)
    {
        next = current->link;
        current->link = prev;
        prev=current;
        current=next;
    }
    *head=prev;
    printf("Reverse Successful\n");
    return 0;
    
}
    
   

int main()
{
    int ch, data;
    SLL *head = NULL;
    while (1)
    {
        printf("\n\n MENU");
        printf("\n 1.Insert at beginning ");
        printf("\n 2.Insert at end ");
        printf("\n 3.Reverse the list");
        printf("\n 4.Display the list");
        printf("\n 5.Exit \n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the number:");
            scanf("%d", &data);
            insert_beginning(&head, data);
            break;
        case 2:
            printf("Enter the number:");
            scanf("%d", &data);
            insert_end(&head, data);
            break;
        case 3:
            reverse_list(&head);
           
            continue;
        case 4:
            display(head);
            continue;
        default:
            return 0;
        }
    }
}