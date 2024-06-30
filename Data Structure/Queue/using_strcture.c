#include<stdio.h>
#include<stdlib.h>
typedef struct que
{
   unsigned int capacity;
    int front,rear,count;
    int *que;
}Que_t;
int create(Que_t *q,int size)
{
    q->que=malloc(sizeof(int)*size);
    q->capacity=size;
    q->front=-1;
    q->rear = -1;
    q->count = 0;
    return 0;
} 
int enqueue(Que_t *q,int x)
{
    if(q->count==q->capacity)
    {
        printf("Queue is full\n");
        return 0;
    }
    if(q->front==-1)
    {
        (q->front)++;
    }
    q->rear=(q->rear+1)%q->capacity;
    q->que[q->rear]=x;
    (q->count)++;
    return 1;
}
int  dequeue(Que_t *q)
{
    if(q->count==0)
    {
        printf("Queue is Empty..");
        return 0;
    }
    q->front= (q->front +1 ) % q->capacity;
    (q->count)--;
    return 0;
}
int display(Que_t q)
{
    if(q.count == 0)
    {
        printf("\n Queue is empty \n");
        return 0;
    }
    int i;
    	printf("Front -> ");
	do
	{
		printf("%d ", q.que[q.front]);
		q.front = (q.front + 1) % q.capacity;
		/* Printing the queue till it will reaches end */	
	}while (--(q.count));

	printf("<- Rear\n");
}
int main()
{
    Que_t q;
    int size;
    printf("Enter Queue size:");
    scanf("%d",&size);
    create(&q,size);
    int op,data;
    printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
    while (1)
    {
        printf("\nEnter your choice:\n");
        scanf(" %d", &op);
        switch (op)
        {
            case 1 : //enqueue operation
            printf("Enter data:");
            scanf("%d",&data);
            enqueue(&q,data);
            break;
            case 2:
            dequeue(&q);
            break;
            case 3:
            display(q);
            break;
            default:
                return 0;
        }
    }
    return 0;
}
      



