#include <stdio.h>
#include <stdlib.h>
typedef struct linked_list
{
    int data;
    struct linked_list *link;
} SLL;
int insert_first(SLL **head, int x);

int insert_last(SLL **head, int x);
int reverse(SLL **head);
int sort(SLL **head);
void Display(SLL *head);

int main()
{
    SLL *head = NULL;
    printf("Linked list operations : \n1.Insert_first\n2.insert_last\n3.Display\n4.Reverse_list\n5.Sort the LL\n6.Exit");
    int choice, element;
    while (1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter element to be inserted : ");
            scanf("%d", &element);
            insert_first(&head, element);
            break;
        case 2:
            printf("Enter element to be added : ");
            scanf("%d", &element);
            insert_last(&head, element);
            break;
        case 3:
            Display(head);
            continue;
        case 4:
            reverse(&head);
            continue;
        case 5:
            sort(&head);
            continue;
        case 6:
            exit(0);
        default:
            printf("Invalid");
            return 0;
        }
    }
    return 0;
}
int insert_first(SLL **head, int data)
{
    SLL *new = malloc(sizeof(SLL));
    if (new == NULL)
    {
        return 0;
    }
    new->data = data;
    new->link = NULL;
    if (*head == NULL)
    {
        *head = new;
        return 0;
    }
    new->link = *head;
    *head = new;
    return 0;
}
int insert_last(SLL **head, int data)
{
    SLL *new = malloc(sizeof(SLL));
    if (new == NULL)
    {
        return 0;
    }
    new->data = data;
    new->link = NULL;
    SLL *temp = *head;
    while (temp)
    {
        temp = temp->link;
    }
    temp->link = new;
}
void Display(SLL *head)
{

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
int reverse(SLL **head)
{
    if (*head == NULL)
    {
        printf("List is Empty.\n");
        return 0;
    }
    if ((*head)->link == NULL)
    {
        printf("Reverse Successfull.\n");
        return 0;
    }
    SLL *prev = NULL;
    SLL *cur = *head;
    SLL *next = NULL;
    while (cur != NULL)
    {
        next = cur->link;
        cur->link = prev;
        prev = cur;
        cur = next;
    }
    *head = prev;
    printf("Reverse Successfull.\n");

    return 0;
}
int sort(SLL **head)
{
    if(*head==NULL)
    {
        printf("List is Empty.\n");
        return 0;
    }
    if((*head)->link == NULL)
    {
        printf("Only one node is present.\n");
        return 0;
    }
	SLL *temp = *head; 

	// Traverse the List 
	while (temp) 
	{ 
		SLL *min = temp; 
		SLL *r = temp->link; 

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
printf("Sorted Successfully.\n");
return 0;
}