#include "sll.h"
#include <stdlib.h>
int insert_at_first(Slist **head, data_t data)
{
    Slist *new_node = malloc(sizeof(Slist));
    if (new_node == NULL)
    {
        return FAILURE;
    }
    new_node->data = data;
    new_node->link = NULL;
    if (*head == NULL)
    {
        *head = new_node;
        return SUCCESS;
    }
    new_node->link = *head;
    *head = new_node;
    return SUCCESS;
}