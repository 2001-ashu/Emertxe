#include"As.h"
int search(hash_t *hash,char *data)
{
    
        int index = (tolower(data[0])) - 97,flag = 0;

        if(hash[index].hlink == NULL)
                return FAILURE;

        main_t *main = malloc(sizeof(main_t));
        sub_t  *sub = malloc(sizeof(sub_t));

        main = hash[index].hlink;

        while(main)
        {
                if(strcmp(main -> file,data) == SUCCESS)
                {
                        sub = main -> slink;

                        while(sub)
                        {
                        //      printf("Word %s is present in %d times\n",data,sub->file,sub->wc);
                                sub = sub -> slink;
                                flag++;
                        }
                        break;
                }
                main = main -> mlink;
        }
        if(flag != 0)
        {
                printf("Word %s is present in %d files\n",data,flag);
                sub = main -> slink;

                while(sub)
                {
                   printf("In file %s %d times\n",sub -> file,sub -> wc);
                   sub = sub -> slink;
                }
                return SUCCESS;
        }
        else
                return FAILURE;
}
