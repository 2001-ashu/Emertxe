#include "sll.h"
int insert_before(Slist **head, data_t g_data, data_t ndata)
{
    if (*head == NULL)
    {
        return LIST_EMPTY;
    }
    if ((*head)->data == g_data) // check head->data equls to g_data
    {
        return insert_at_first(head, ndata); // call the insert_at_first function
    }
    Slist *temp = *head;
    while (temp->link != NULL)
    {
        if (temp->link->data == g_data)
        {
            Slist *new = malloc(sizeof(Slist));
            if (new == NULL)
            {
                return FAILURE;
            }
            new->data = ndata;
            new->link = temp->link;

            temp->link = new;
            return SUCCESS;
        }
        temp = temp->link;
    }
    return DATA_NOT_FOUND;
}