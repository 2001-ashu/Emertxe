#include "sll.h"

int sl_sort(Slist **head)
{
    int size = 0, i , j;
    if (*head == NULL)
    {
        return LIST_EMPTY;
    }

    if((*head)->link == NULL)
    {
        return SUCCESS;
    }

    Slist *current = *head;
    while(current != NULL)
    {
        size = size + 1;
        current = current->link;
    }


   for(i = 0; i < size - 1; i++)
   {
       Slist *prev = NULL;
       Slist *t1 = *head;
       Slist *t2 = t1->link;

       for(j = 0; j < size - i - 1; j++)
       {
           if(t1->data > t2->data)
           {
               t1->link = t2->link;
               t2->link = t1;

               if(prev == NULL)
                   *head = t2;
               else
                  prev->link = t2;

              prev = t2;
              t2 = t1->link;
           }
           else
           {
           prev = t1;
           t1 = t2;
           t2 = t2->link;
           }

       }

   }
   return SUCCESS;





}
