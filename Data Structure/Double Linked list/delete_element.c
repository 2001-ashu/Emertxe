#include "dll.h"

int dl_delete_element(Dlist **head, Dlist **tail, int data)
{	
    if (*head == NULL) 
    {
        return LIST_EMPTY;
    }

    Dlist *current = *head;
    while (current != NULL) 
    {
        if (current->data == data) 
        {
            if (current == *head && current == *tail) 
            {
                *head = NULL;
                *tail = NULL;
            }
            else if (current == *head) 
            {
                *head = (*head)->next;
                (*head)->prev = NULL;
            } 
            else if (current == *tail) 
            {
                *tail = (*tail)->prev;
                (*tail)->next = NULL;
            } 
            else 
            {
                current->prev->next = current->next;
                current->next->prev = current->prev;
            }
            free(current);
            return SUCCESS;;
        }
        current = current->next;
    }

    return DATA_NOT_FOUND;

}