#include "sll.h"

int sl_sort(Slist **head)
{
    if(*head==NULL)
    {
        return LIST_EMPTY;
    }
    if((*head)->link == NULL)
    {
        return SUCCESS;
    }
	Slist *temp = *head; 

	// Traverse the List 
	while (temp) 
	{ 
		Slist *min = temp; 
		Slist *r = temp->link; 

		// Traverse the unsorted sublist 
		while (r) 
		{ 
			if (min->data > r->data) 
				min = r; 

			r = r->link; 
		} 

		// Swap Data 
		int x = temp->data; 
		temp->data = min->data; 
		min->data = x; 
		temp = temp->link; 
	} 

return SUCCESS;
}