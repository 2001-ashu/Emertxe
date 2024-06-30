#include "dll.h"

int dl_insert_before(Dlist **head, Dlist **tail, int gdata, int ndata)
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
            if (current == *head) 
            {
                newNode->next = *head;
                (*head)->prev = newNode;
                *head = newNode;
            }
            else 
            {
                newNode->prev = current->prev;
                newNode->next = current;
                current->prev->next = newNode;
                current->prev = newNode;
            }
            return SUCCESS;
        }
        current = current->next;
    }
    return DATA_NOT_FOUND;

}