#include "sll.h"
/* Function to get the middle of the linked list*/
int find_mid(Slist *head, int *mid) 
{ 
   
    if (head == NULL)
        return LIST_EMPTY;

    Slist *slow = head;
    Slist *fast = head;

    while (fast != NULL && fast->link != NULL) 
    {
        slow = slow->link;
        fast = fast->link->link;
    }

    *mid = slow->data;
    return SUCCESS;

}