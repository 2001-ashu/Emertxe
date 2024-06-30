// remove_duplicates.c

#include "sll.h"

int remove_duplicates(Slist **head)
{
    // Check if the list is empty
    if (*head == NULL) 
    {
        return FAILURE;
    }

    Slist *current = *head;
    Slist *temp = NULL;

    while (current != NULL) 
    {
        temp = current;

        // Check for duplicates of the current node
        while (temp->link != NULL) 
        {
            if (current->data == temp->link->data) 
            {
                // Duplicate found, remove the duplicate node
                Slist *duplicate = temp->link;
                temp->link = temp->link->link;
                free(duplicate);
            } 
            else 
            {
                temp = temp->link;
            }
        }

        current = current->link;
    }

    return SUCCESS;
}
