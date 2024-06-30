#include"sll.h"
int insert_after(Slist **head,data_t g_data,data_t ndata)
{
    if(*head==NULL)
    {
        return LIST_EMPTY;
    }
    Slist *temp=*head;                                                          //assign head in temp
    while(temp!=NULL)                                                           //loop run until temp not equals to null
    {
        if(temp->data==g_data)                                                  //condition to check temp->data equals to g_data
    {
        Slist *newnode=malloc(sizeof(Slist));                                   // memory allocation
        if(newnode==NULL)                                                       //check new node equls to null
        {
            return FAILURE;                                                     //return failure
        }
        newnode->data=ndata;                                                    //ndata assign newnode->data
        newnode->link=temp->link;                                               //temp->link assign in newnode->link
        temp->link=newnode;                                                     //newnode assign in temp->link
        return SUCCESS;
        
    }
    temp=temp->link;                                                            //temp->link assign in temp
    }
    return DATA_NOT_FOUND;
}