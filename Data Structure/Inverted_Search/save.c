#include"As.h"
int save(hash_t *hash)
{
    char file[50];
    FILE *fptr;
    printf("Enter the backup file name in .txt extension(backup.txt) : ");
    scanf("%s",file);

    if(strcmp(strstr(file,"."),".txt")==SUCCESS)
    {
        fptr=fopen(file,"w");
        if(fptr == NULL) 
        {
            printf("Failuare to create a file\n");
            return FAILURE;
        }
        else{
          //  main_t *main=malloc(sizeof(main_t));
            //sub_t *sub=malloc(sizeof(sub_t));

            for (int i = 0; i < 28; i++)
            {
            main_t *main=malloc(sizeof(main_t));
            sub_t *sub=malloc(sizeof(sub_t));
                main=hash[i].hlink;
                if(main!=NULL)
                {
                    while(main)
                    {
                        fprintf(fptr,"#%d;%d;%s;",i,main->fc,main->file);
                        sub=main->slink;
                        while(sub)
                        {
                            fprintf(fptr,"%s;%d",sub->file,sub->wc);
                            sub=sub->slink;
                            if(sub!=NULL)
                            {
                                fprintf(fptr,"%c",';');
                            }
                        }
                            fprintf(fptr,"%c\n",'#');
                            main=main->mlink;
                    }
                }
            }
            

        }
    }
    else
    {
        return FAILURE;
    }
}
