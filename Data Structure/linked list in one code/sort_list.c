#include<stdio.h>
#include<stdlib.h>
typedef struct  node {
    int data;
    struct node *link;
}SLL;
int insert(SLL **head, int data) {
    SLL *new=malloc(sizeof(SLL));
    if(new==NULL)
    {
        printf("Memory not allocated\n");
        return 0;
    }
    new->data=data;
    new->link=NULL;
    new->link=*head;
    *head=new;
    
    return 0;
}
void display(SLL *head){

    if (head == NULL)
    {
        printf("INFO : List is empty\n");
    }
    else
    {
        while (head)
        {
            printf("%d -> ", head->data);
            head = head->link;
        }

        printf("NULL\n");
    }

}
int sort(SLL **head)
{
    if(*head==NULL)
    {
        printf( "List is Empty \n" );
        return 0;
    }
    if( (*head)->link == NULL )
    {
        printf("Only one node is present..\n");
        return 0;
    }
    int size=0;
    SLL *temp=*head;
    while(temp!=NULL)
    {
        size++;
        temp=temp->link;
    }
    for(int i=0;i<size-1;i++)
    {
        SLL *prev=NULL;
        SLL *t1=*head;
        SLL *t2=t1->link;

        for(int j=0;j<size-i-1;j++)
        {
            if(t1->data>t2->data)
            {
                t1->link=t2->link;
                t2->link=t1;
                if(prev==NULL)
                {
                    *head=t2;
                }
                else{
                    prev->link=t2;
                }
                prev=t2;
                t2=t1->link;
            }
            else{
                prev=t1;
                t1=t2;
                t2=t1->link;
            }
        }
    }
    printf("Sorting is Succesfully..");
    return 0;
}
int main()
{
    SLL *head=NULL;
    int ch,x;
    while(1)
    {
        printf("Menu\n");
        printf("1.Insert at the end of the list\n2:Display the list\n3:Sort the list\n");
        printf("Enter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
            printf("Enter a data:");
            scanf("%d",&x);
            insert(&head,x);
            break;
            case 2:
            display(head);
            break;
            case 3:
            sort(&head);
            break;
            default:
            return 0;
        }
       
    }
}