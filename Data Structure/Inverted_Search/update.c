#include "As.h"
int check(Flist **head, char *str)
{
	Flist *temp = *head, *prev = *head;

	while (temp)
	{
		if (strcmp(str, temp->file) == SUCCESS)
		{
			if (temp == *head)
			{
				*head = (*head)->link;
				free(temp);
				temp = NULL;
			}
			else
			{
				prev->link = temp->link;
				free(temp);
				temp = NULL;
			}
			break;
		}
		prev = temp;
		temp = temp->link;
	}
}
int create_update(hash_t *hash, Flist **head, char *str)
{
	int index = atoi(strtok((str + 1), ";"));
	int count, i, flag = 0;
	;

	main_t *Mnew = malloc(sizeof(main_t));

	if (Mnew == NULL)
		return FAILURE;

	if (hash[index].hlink == NULL)	{
		Mnew->fc = atoi(strtok(NULL, ";"));
		count = Mnew->fc;
		strcpy(Mnew->file, strtok(NULL, ";"));
		Mnew->mlink = NULL;

		for (i = 1; i <= count; i++)
		{
			sub_t *Snew = malloc(sizeof(sub_t));
			strcpy(Snew->file, strtok(NULL, ";"));
			Snew->wc = atoi(strtok(NULL, ";"));
			Snew->slink = NULL;

			if (i == 1)
			{
				Mnew->slink = Snew;
			}
			else
			{
				sub_t *temp = Mnew->slink;
				while (temp->slink != NULL)
				{
					temp = temp->slink;
				}
				temp->slink = Snew;
			}
			check(head, Snew->file);
		}
		hash[index].hlink = Mnew;
	}
	else
	{
		Mnew->fc = atoi(strtok(NULL, ";"));
		count = Mnew->fc;
		strcpy(Mnew->file, strtok(NULL, ";"));
		Mnew->mlink = NULL;

		for (i = 1; i <= count; i++)
		{
			sub_t *Snew = malloc(sizeof(sub_t));
			strcpy(Snew->file, strtok(NULL, ";"));
			Snew->wc = atoi(strtok(NULL, ";"));
			Snew->slink = NULL;

			if (i == 1)
			{
				Mnew->slink = Snew;
			}
			else
			{
				sub_t *temp = Mnew->slink;

				while (temp->slink != NULL)
				{
					temp = temp->slink;
				}
				temp->slink = Snew;
			}

			check(head, Snew->file);
		}

		main_t *temp = hash[index].hlink;

		while (temp->mlink != NULL)
			temp = temp->mlink;

		temp->mlink = Mnew;
	}
	return SUCCESS;
}
int update_database(hash_t *hash, Flist **head, char **argv)
{
	int i;
	char str[50];
	FILE *fptr;

	printf("Enter the file name you stored data : ");
	scanf("%s", str);

	if (strcmp(strstr(str, "."), ".txt") == SUCCESS)
	{
		fptr = fopen(str, "a+");
		if (fptr == NULL)
		{
			printf("FAILURE : to open file\n");
			return FAILURE;
		}

		while (fscanf(fptr, "%s", str) != EOF)
		{
			for (i = 0; str[i]; i++)
				;
			i = i - 1;

			if (str[0] == '#' && str[i] == '#')
			{
				if (create_update(hash, head, str) != SUCCESS)
					return FAILURE;
			}
			else
			{
				printf("Pass correct file\n");
				return FAILURE;
			}
		}
	}
	else
	{
		printf("Enter the file in .txt extension\n");
		return FAILURE;
	}

	return SUCCESS;
}
