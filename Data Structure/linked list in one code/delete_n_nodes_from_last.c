#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

void insertAtBeginning(Node **head, int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

int deleteLastN(Node **head, int n) {
    if (*head == NULL || n <= 0)
    {
        return 0;
    }

    Node *slowPtr = *head;
    Node *fastPtr = *head;
    Node *prevPtr = NULL;
    int count=0;
    // Move the fast pointer n nodes ahead
   while(fastPtr && count<n)
   {
        fastPtr = fastPtr->next;
        count++;
    }
    if(count < n)
    {
        printf("%d nodes not available to delete\n",n);
        exit(0);
    }

    // If fastPtr is NULL, delete the head node
    if (fastPtr == NULL) {
        *head = slowPtr->next;
        free(slowPtr);
        return 0;
    }
           


    // Move both pointers until fastPtr reaches the end
    while (fastPtr != NULL) {
        prevPtr = slowPtr;
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next;
    }

    // Delete nodes from slowPtr onwards
    prevPtr->next = NULL;
    while (slowPtr != NULL) {
        Node *temp = slowPtr;
        slowPtr = slowPtr->next;
        free(temp);
    }
}

void printList(Node *head) {
    Node *current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    Node *head = NULL;

    // Insert elements into the linked list
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 4);
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    printf("Original linked list: ");
    printList(head);

    int n = 1; // Number of nodes to delete from the end
    deleteLastN(&head, n);

    printf("Linked list after deleting last %d nodes: ", n);
    printList(head);

    return 0;
}
