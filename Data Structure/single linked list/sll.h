#ifndef SLL_H
#define SLL_H

#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1
#define LIST_EMPTY -2
#define DATA_NOT_FOUND -3
typedef int data_t;
typedef struct node
{
	data_t data;
	struct node *link;
}Slist;

int find_node(Slist *head, data_t);
int insert_at_last(Slist **head, data_t );
int insert_after(Slist **head,data_t, data_t);
int insert_before(Slist **head,data_t,data_t);
int insert_at_first(Slist **head, data_t);
int delete_list(Slist **head);
int delete_last(Slist **head);
int delete_first(Slist **head);
void print_list(Slist *head);

#endif