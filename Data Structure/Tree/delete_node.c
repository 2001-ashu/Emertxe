#include "tree.h"

extern int status;
/* Function to delete the node  */
Tree_t * delete_BST(Tree_t * root, int data)
{
    int temp1;


	// if tree is empty
	if (root == NULL)
	{
		return root;
	}

	// If the key to be deleted is less than the root's key, then it lies in left subtree
    else if (data < root->data)
	{
        root->left = delete_BST(root->left, data);
        
 	}

    	// If the key to be deleted is greater than the root's key, then it lies in right subtree
	else if (data > root->data)
	{
        root->right = delete_BST(root->right, data);
       
 	}

	// if data is same as root's data, then This is the node to be deleted
    else
    {
        //if data == root->data set status =1
        status = 1;
        //check for leaf node
		if (root->left == NULL && root->right == NULL)
		{
		    root = NULL;
    		free(root);
    		
    		//return root;
        }
        // node with only one child or no child
        else if (root->left == NULL && root->right != NULL)
        {
            //local refernce to the tree
	        Tree_t *temp = root;
            root = root->right;
    		free(temp);
    		//return root;
        }
        else if (root->right == NULL && root->left != NULL)
        {
            //local refernce to the tree
	        Tree_t *temp = root;
            root = root->left;
    		free(temp);
       		//return root;
       	}
 		else
		{
		    // node with two children: Get the inorder successor (smallest in the right subtree)
			//temp -> data = findMin_BST(root->right);
        	// Copy the inorder successor's content to this node
    		temp1 = findmin(root->right);
     		root->data = temp1;
     		// Delete the inorder successor
       		root->right = delete_BST(root->right, temp1);
		    
		}
    }
    
   
	return root;
    
}