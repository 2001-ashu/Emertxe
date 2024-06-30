#include "As.h"

int file_validation(Flist **head, char *argv[])
{

    int i = 1;
    for (int i = 1; argv[i]!=NULL; i++)
    {
        printf("strigs == %s\n",argv[i]);
        // check the file is in txt format or not
        // if (strstr(argv[i], ".") != NULL)
        // {
        if (strstr(argv[i], ".") == NULL)
        {
            printf("%s --> Pass with [.txt]\n", argv[i]);
            continue;
        }
            if ((strcmp(strstr(argv[i], "."), ".txt")) != SUCCESS)
            {
                printf("%s --> Please give Correct argument\n", argv[i]);
                continue;
            }
           
      

        // opening a file in read mode
        FILE *fp = fopen(argv[i], "r");
        // check file is present or not
        if (fp == NULL)
        {
            printf("%s -->File doesn't Exist in present working directory..\n", argv[i]);

            continue;
        }
        fseek(fp, 0, SEEK_END);
        int size = ftell(fp);
        // check the file is empty or not

        if (size == 0)
        {
            printf("%s -->File Is Empty..\n", argv[i]);
            continue;
        }
        int j = i + 1;
        int flag;
        while (argv[j])
        {
            if (strcmp(argv[i], argv[j]) == 0)
            {
                j++;
                flag = 1;
                continue;
            }
            j++;
        }

        if (flag == 1)
        {
            printf("---> %s duplicate file\n", argv[i]);
            continue;
        }
        if (insert_at_last(head, argv[i]) != SUCCESS)
            return FAILURE;
    }
    
    return SUCCESS;
}
int insert_at_last(Flist **head, char *fname)
{
    Flist *new = malloc(sizeof(Flist));
    if (new == NULL)
    {
        return FAILURE;
    }
    strcpy(new->file, fname);
    new->link = NULL;
    if (*head == NULL)
    {
        *head = new;
        return SUCCESS;
    }
    Flist *temp = *head;
    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = new;
    return SUCCESS;
}
