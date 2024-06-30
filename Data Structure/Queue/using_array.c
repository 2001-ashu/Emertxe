#include<stdio.h>
int rear=-1;
int front=-1;

int enqueue(int *arr,int x,int size)
{
    if(rear==size-1)
    {
        printf("Queue is Full.\n");
        return 0;
    }
    if(front==-1)
    {
        front++;
    }
    rear=(rear+1)%size;
    arr[rear]=x;
   // count++;

}

void display(int *arr,int size)  
{  
    int i=front;  
    if(front==-1 )  
    {  
        printf("\n Queue is empty..\n");  
    }  
    else{
    
        printf("\nElements in a Queue are :");  
        for (i = front; i <= rear; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
     
} 
void dequeue(int *arr,int size) {
    if (front==-1 && rear==-1) {
        printf("Queue is Empty.\n");
        return;
    }
    else if (front == rear) {
        printf("Deleted element: %d\n", arr[front]);
        front = rear = -1;
    }
    else {
        printf("Deleted element: %d\n", arr[front]);
        front = (front + 1) % size;
    }
}

int main()
{
    int size;
    printf("Enter size:");
    scanf("%d",&size);
    int arr[size];
    int ch,x;
    while (1) 
    {
        printf("Queue Operations:\n");
        printf("1.Enqueue\n2.Display\n3.Dequeue\n4.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1 : 
            printf("Enter data which you insert:");
            scanf("%d",&x);
            enqueue(arr,x,size);
            break;
            case 2:
            display(arr,size);
            break;
            case 3:
            dequeue(arr,size);
            break;
            default:
            return 0;
        }


    }
    
}