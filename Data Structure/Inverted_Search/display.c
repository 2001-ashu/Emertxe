#include"As.h"
int display_database(hash_t *hash)
{
        main_t *main = malloc(sizeof(main_t));
        sub_t *sub = malloc(sizeof(sub_t));

        if(main == NULL || sub == NULL)
                return FAILURE;

        printf("----------------------------------------------");
        printf("\nindex     word        F.C.   Filename     W.C.\n");
        printf("----------------------------------------------\n");

        for(int i = 0;i < 28;i++)
        {
                main = hash[i].hlink;

                while(main != NULL)
                {
                        printf("[%.2d]     %-10.10s%5d",i,main -> file,main -> fc);

                        sub = main -> slink;
                        while(sub != NULL)
                        {
                                printf("     %-10.10s%5d",sub -> file,sub -> wc);
                                sub = sub -> slink;
                                if(sub != NULL)
                                {
                                        printf("\n");
                                        printf("                        ");
                                }
                        }
                        main = main -> mlink;
                        printf("\n----------------------------------------------\n");
                }
        }
        return SUCCESS;
}
