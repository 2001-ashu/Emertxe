#include "sll.h"

int delete_first(Slist **head)
{

    if(*head==NULL)
    {
        return FAILURE;
    }
  
    Slist *temp=*head;
    *head=temp->link;
   
  
    free(temp);
    
    return SUCCESS;

}