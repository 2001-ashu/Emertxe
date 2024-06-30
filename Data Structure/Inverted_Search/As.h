#ifndef As_H
#define As_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>

#define FAILURE -1
#define SUCCESS 0
typedef struct node
{
    char file[20];
    struct node *link;
} Flist;
typedef struct sub
{
        int wc;
        char file[20];
        struct sub *slink;
}sub_t;

typedef struct main
{
        int fc;
        char file[20];
        struct main *mlink;
        sub_t *slink;
}main_t;

typedef struct hashtable
{
        int index;
        main_t *hlink;
}hash_t;



int file_validation(Flist **head, char *argv[]);
int insert_at_last(Flist **head, char *fname);
int hash_table(hash_t *hash);
int create_database(Flist **head,hash_t *hash);
int put_in_hashtable(int index,char *word,hash_t *hash,char *fname);
int display_database(hash_t *hash);
int search(hash_t *hash,char *data);
int save(hash_t *hash);
int update_database(hash_t *hash,Flist **head,char **argv);
int create_update(hash_t *hash,Flist **head,char *str);

#endif