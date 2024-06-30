#include "dll.h"

int dl_insert_after(Dlist **head, Dlist **tail, int gdata, int ndata)
{
     Dlist *newNode = (Dlist *)malloc(sizeof(Dlist));
    if (newNode == NULL) 
    {
        return FAILURE;
    }
    newNode->data = ndata;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (*head == NULL) 
    {
        return LIST_EMPTY;
    }

    Dlist *current = *head;
    while (current != NULL) 
    {
        if (current->data == gdata) 
        {
            if (current == *tail) 
            {
                newNode->prev = *tail;
                (*tail)->next = newNode;
                *tail = newNode;
            } 
            else 
            {
                newNode->prev = current;
                newNode->next = current->next;
                current->next->prev = newNode;
                current->next = newNode;
            }
            return SUCCESS;
        }
        current = current->next;
    }
    return DATA_NOT_FOUND;

}