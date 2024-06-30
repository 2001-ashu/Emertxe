#include "tree.h"

/* Function to insert the data's in BST */
int insert_into_BST(Tree_t **root, int data)
{
    if(*root==NULL)
    {
        *root=create(data);
        return SUCCESS;
    }
    Tree_t *temp=*root;
    Tree_t *prev;
    while(temp!=NULL)
    {
        prev=temp;
        if(temp->data >data)
        {
            temp=temp->left;
        }
        else if(temp->data<data)
        {
            temp=temp->right;
        }
        else
        {
            return DUPLICATE;
        }
    }
    if(prev->data<data)
    {
        prev->right=create(data);
    }
    else
    {
        prev->left=create(data);
    }
    return SUCCESS;
}