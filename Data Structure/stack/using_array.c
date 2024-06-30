#include <stdio.h>
int top = -1;
int size;
int push(int *arr, int x)
{
    if (top == size - 1)
    {
        printf("Stack is Full\n");
        return 0;
    }
    top++;
    arr[top] = x;
    printf("Successfully inserted.\n");
    return 0;
}
int pop(int *arr, int x)
{
    if (top == -1)
    {
        printf("Stack is Empty \n");
        return 0;
    }
    top--;
}
void display(int *arr)
{
    int i;
    for (i = 0; i <= top; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{

    int ch;
    int x;
    printf("Enter Size:");
    scanf("%d", &size);
    int arr[size];
    while (1)
    {
        printf("\n\tStack Operations");
        printf("\n1.Push ");
        printf("\n2.Pop ");
        printf("\n3.Display Stack Elements ");
        printf("\n4.Exit ");
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the  element to be pushed : ");

            scanf("%d", &x);
            push(arr, x);
            break;

        case 2:

            pop(arr, x);
            break;

        case 3:
            display(arr);
            break;

        case 4:
            return 0;
            break;

        default:
            printf("Invalid");
            
        }
    }
}