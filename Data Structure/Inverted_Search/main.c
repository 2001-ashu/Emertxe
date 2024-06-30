#include "As.h"
int hash_table(hash_t *hash)
{
    for (int i = 0; i < 28; i++)
    {
        hash[i].index = i;
        hash[i].hlink = NULL;
    }
    return SUCCESS;
}
int main(int argc, char *argv[])
{
    int flag1 = 1;
    int flag2 = 1;
    char sloop = 'y';
    Flist *head = NULL;
    char str[20];
    hash_t hash[28];
    if (argc <= 1)
    {
        printf("Enter the valid no of arguments\n");
        printf("./a.out file1.txt file2.txt ...\n");
        return FAILURE;
    }

    if (file_validation(&head, argv) == SUCCESS)
    {
         Flist *t=head;
         while(t!=NULL)
         {
             printf(" %s->",t->file);
             t=t->link;
        }
        printf("File Validation Successful!\n");
        if (hash_table(hash) == SUCCESS)
        {
            printf("Successfully created hashtable\n");

            printf("1.Create Database \n2.Display\n3.Search Database\n4.Save database\n5.Update database\n6.Exit\n");
            while (sloop == 'Y' || sloop == 'y')
            {
                /* code */

                printf("Choose  Option: ");
                int option;
                scanf("%d", &option);
                switch (option)

                {
                case 1:
                    if (flag1 = 1)
                    {
                        if (create_database(&head, hash) == SUCCESS)
                        {
                            printf("Database Created Successfully.\n");
                        }
                        else
                        {
                            printf("Failed to create Database\n");
                        }
                        flag1 = 0;
                        break;
                    }
                    else
                    {
                        printf("Database Already Created\n");
                    }

                case 2:
                    if (display_database(hash) == SUCCESS)
                        printf("\ndata displayed successfully\n");
                    else
                        printf("FAILIURE : display data\n");
                    break;
                case 3:
                    printf("Enter the data : ");
                    scanf(" %s", str);

                    if (search(hash, str) == SUCCESS)
                        printf("Data is Found is found\n");
                    else
                        printf("Data is not found\n");
                    break;
                case 4:
                    if (save(hash) == SUCCESS)
                        printf("Data saved successfully\n");
                    else
                        printf("Failure : to save data\n");
                    break;
                case 5:
                    if (flag2 == 1)
                    {
                        if (update_database(hash, &head, argv) == SUCCESS)
                            printf("Updeted successefully\n");
                        else
                            printf("Failure : to update\n");

                        flag2 = 0;
                    }
                    else
                        printf("At a time we can not perform creat and update\n");
                    break;

                case 6:
                    exit(1);
                }
                printf("Do you wants to continue (Y/y) : ");
                scanf(" %c", &sloop);
            }
        }
        else
            printf("Failure : to creat hastable\n");
    }
    else
        printf("Failure : Validation\n");
}
