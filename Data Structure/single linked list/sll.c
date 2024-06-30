#include "sll.h"

int main()
{

	int option, data, key,gdata,ndata,ret;

	Slist *head = NULL; // initialize the header to NULL

	while (1)
	{
		printf("1. Insert last\n2. Insert first\n3. Delete Last\n4. Delete first\n5. Delete list\n6. Find node\n7. Print list\n8.insert_before\n9.insert_after\n10. Exit\nEnter your choice : ");
		/*ask user options*/

		scanf("%d", &option);

		switch (option)
		{
		case 1:
			printf("Enter the number that you want to insert at last: ");
			scanf("%d", &data);

			/*insert_at_last function call*/
			if (insert_at_last(&head, data) == FAILURE) // pass by reference
			{
				printf("INFO : Insertion Failure\n");
			}
			break;
		case 2:
			/*To insert the element at first */
			printf("Enter the element you have to insert at the first : ");
			scanf("%d", &data);

			if (insert_at_first(&head, data) == -1)
			{
				printf("INFO : Insertion Failure\n");
			}
			break;

		case 3:
			/* Delete a last link*/
			if (delete_last(&head) == -1)
			{
				printf("INFO : Delete last Failure\nList is empty\n");
			}
			else
			{
				printf("INFO : Delete last successfull\n");
			}

			break;
		case 5:
			/* Delete list */
			if (delete_list(&head) == LIST_EMPTY)
			{
				printf("INFO : Delete list Failure\nList is empty\n");
			}
			else
			{
				printf("INFO : Delete list Successfull\n");
			}

			break;
		case 4:
			/*To delete first node */
			if (delete_first(&head))
			{
				printf("INFO : Delete first Failure\n List is empty\n");
			}
			else
			{
				printf("INFO : Delete first successfull\n");
			}
			break;
		case 6:
			printf("Enter the key to find : ");
			scanf("%d", &key);
			int count;
			if ((count = find_node(head, key)) == FAILURE)
			{
				printf("INFO : Failure\nList is empty or Key not found\n");
			}
			else
			{
				printf("%d found in the list at the position %d\n", key, count);
			}

			break;
		case 7:
			/* print list function call*/
			print_list(head);
			break;
		case 8:
			printf("Enter the value of gdata : ");
			scanf("%d", &gdata);
			printf("Enter the ndata that you want to insert after %d : ", gdata);
			scanf("%d", &ndata);
			/*insert_at_last function call*/
			if ((ret = insert_before(&head, gdata, ndata)) == DATA_NOT_FOUND) // pass by reference
			{
				printf("INFO : %d is not found at the list\n", gdata);
			}
			else if (ret == LIST_EMPTY)
			{
				printf("INFO : List is empty\n");
			}
			break;
			case 9:
			printf("Enter the value of gdata : ");
			scanf("%d", &gdata);
			printf("Enter the ndata that you want to insert after %d : ", gdata);
			scanf("%d", &ndata);
			/*insert_at_last function call*/
			if ((ret = insert_after(&head, gdata, ndata)) == DATA_NOT_FOUND) // pass by reference
			{
				printf("INFO : %d is not found at the list\n", gdata);
			}
			else if (ret == LIST_EMPTY)
			{
				printf("INFO : List is empty\n");
			}

			break;


		case 10:
			return SUCCESS;
		default:
			printf("Enter proper choice !!\n");

			break;
		}
	}
}
