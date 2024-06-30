#include "sll.h"

int delete_last(Slist **head)
{
     if(*head==NULL)
    {
        
        puts("List is Empty\n");
        return FAILURE;
    }
    if((*head)->link==NULL)
    {
        free(*head);
        *head=NULL;
        return SUCCESS;
    }
    Slist *temp=*head;
    Slist *prev=NULL;
    while(temp->link!=NULL)
    {
        prev=temp;
        temp=temp->link;
        
    }
    free(temp);
    prev->link=NULL;
    return SUCCESS;
    

}