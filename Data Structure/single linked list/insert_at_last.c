#include "sll.h"
#include<stdlib.h>
int insert_at_last(Slist **head, data_t data)
{
    Slist *new_node=malloc(sizeof(Slist));
    if(new_node==NULL)
    {
        return FAILURE;
        
    }
    new_node->data=data;
    new_node->link=NULL;
    if(*head==NULL)
    {
        *head=new_node; 
        puts("List is Updated..\n");
        return SUCCESS;
    }
    Slist *temp=*head;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=new_node;
    printf("List Updated.\n");
    return SUCCESS;

}