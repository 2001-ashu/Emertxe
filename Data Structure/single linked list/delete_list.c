#include"sll.h"
int delete_list(Slist **head)
{
    if(*head==NULL)
    {
        return LIST_EMPTY;
    }
    	Slist *temp;                                                                // create structure pointer var
	while(*head!=NULL)                                                          // loop for until head not equals to null
	{
	    temp=*head;                                                             //head stores in temp
	    *head=temp->link;                                                       // temp link stores in link
	    free(temp);                                                             //free the head
	}
	return SUCCESS;   

}