#include"As.h"
int put_in_hashtable(int index,char *word,hash_t *hash,char *file)
{
        int count;

        if(hash[index].hlink == NULL)
        {
                main_t *Mnew = malloc(sizeof(main_t));
                sub_t *Snew = malloc(sizeof(sub_t));

                if(Mnew == NULL || Snew == NULL)
                        return FAILURE;

                strcpy(Mnew -> file,word);
                Mnew -> fc = 1;
                Mnew -> mlink = NULL;
                Mnew -> slink = Snew;

                strcpy(Snew -> file,file);
                Snew -> wc = 1;
                hash[index].hlink = Mnew;
        }
        else
        {
                sub_t *Snew = malloc(sizeof(sub_t));

                if(Snew == NULL)
                        return FAILURE;

                main_t *temp = hash[index].hlink;


                while(temp != NULL)
                {
                        if(strcmp(temp -> file,word) == SUCCESS)
                        {
                                sub_t *temp2 = temp -> slink;

                                while(temp2 != NULL)
                                {
                                        if(strcmp(temp2 -> file,file) == SUCCESS)
                                        {
                                                count = temp2 -> wc;
                                                temp2 -> wc = ++count;
                                                return SUCCESS;
                                        }
                                        temp2 = temp2 -> slink;
                                }

                                temp2 = temp -> slink;
                                Snew -> slink = NULL;
                                Snew -> wc = 1;
                                strcpy(Snew -> file,file);

                                while(temp2 -> slink != NULL)
                                        temp2 = temp2 -> slink;

                                temp2 -> slink = Snew;
                                count = temp -> fc;
                                temp -> fc = ++count;

                                return SUCCESS;
                        }
                        temp = temp -> mlink;
                }

                main_t *Mnew = malloc(sizeof(main_t));
                temp = hash[index].hlink;

                if(Mnew == NULL)
                        return FAILURE;

                while(temp -> mlink != NULL)
                        temp = temp -> mlink;

                strcpy(Mnew -> file,word);
                Mnew -> fc = 1;
                Mnew -> mlink = NULL;
                Mnew -> slink = Snew;

                strcpy(Snew -> file,file);
                Snew -> wc = 1;
                Snew -> slink = NULL;
                temp -> mlink = Mnew;
                return SUCCESS;
        }
}
int create_database(Flist **head,hash_t *hash)
{
        if(*head==NULL)
        {
                printf("Linked list empty.\n");
                return FAILURE;
        }
        Flist *temp = *head;
        int ch,index;
        char word[20];

        while(temp != NULL)
        {
                FILE *fptr;

                fptr = fopen(temp -> file,"r");

                if(fptr == NULL)
                {
                        printf("Failure to open file\n");
                        return FAILURE;
                }
                while(fscanf(fptr,"%s",word) != EOF)
                {
                        ch = word[0];

                        if(ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
                        {
                                index = (tolower(ch)) - 97;
                        }
                        else if(ch >= 48 && ch <= 57)
                        {
                                index = 27;
                        }
                        else
                                index = 26;

                        if(put_in_hashtable(index,word,hash,temp -> file) == FAILURE)
                                return FAILURE;
                }
                temp = temp -> link;
        }
        return SUCCESS;
}
