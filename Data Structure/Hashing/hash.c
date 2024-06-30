#include <stdio.h>
#include<stdlib.h>
typedef struct hash
{
    int index;
    int value;
    struct hash *link;
} hash_t;
void create(hash_t *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i].index = -1;
        arr[i].value = -1;
        arr[i].link = NULL;
    }
}
int insert_data(hash_t *arr,int data,int size)
{
    if(arr[data%size].value==-1)
    {
        arr[data%size].value=data;
        return 0;
    }
    else{
        hash_t *new=malloc(sizeof(hash_t));
        if(new==NULL)
        {
            printf("Memory is not enough!");
            return 0;
        }
        new->index=data%size;
        new->value=data;
        new->link=NULL;
        hash_t *temp=&(arr[data%size]);
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=new;
        return 0;
    }
}
void Display(hash_t *arr,int size)
{
    hash_t *temp;
    for (int i = 0; i < size; i++)
    {
        printf("[%d]-%d",i,arr[i].value);
        temp=arr[i].link;
        while(temp)
        {
            printf("-> %d",temp->value);
            temp=temp->link;
        }
        printf("\n");
    }
    
}
int search(hash_t *arr,int size,int data)
{
    if(arr[data%size].value == -1){return -1;}
    else
    {
        hash_t *temp=&(arr[data%size]);
        int count=0;
        while(temp)
        {
           
            if(temp->value==data)
            {
                printf("Data is present in hashtbale\n");
                return 0;
            
            }
            temp=temp->link;
        }
        return -1;
    }
}
int delete_element(hash_t *arr,int size,int data)
{
    if(arr[data%size].value==-1)
    {
        printf("Hash  table does not contain the element \n");
        return 0;
    }
    if(arr[data%size].value==data && arr[data%size].link==NULL)
    {
        arr[data%size].value=-1;
        return 0;
    }
    if(arr[data%size].value==data && arr[data%size].link!=NULL)
    {
        hash_t *temp=arr[data%size].link;
        arr[data%size].value=arr[data%size].link->value;
        arr[data%size].link=arr[data%size].link->link;
        free(temp);
        return 0;
    }
    hash_t *temp=&arr[data%size];
    hash_t *prev=temp;
    while(temp->link && temp->value!=data)
    {
        prev=temp;
       
        temp=temp->link;
    }
     if(temp->value==data)
        {
            prev->link=temp->link;
            free(temp);
            return 0;
        }
    printf("Data Not Found.\n");
    return  0;
} 
int delete_table(hash_t *arr,int size)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i%size].value!=-1)
        {
            arr[i%size].value=-1;
            hash_t *temp1=arr[i%size].link;
            arr[i%size].link=NULL;
            hash_t *temp2;
            while(temp1)
            {
                temp2=temp1->link;
                free(temp1);
                temp1=temp2;
            }
        }
    }
    return 0;
        
    
    
}
int main()
{
    int size;
    printf("Enter Size:");
    scanf("%d", &size);
    hash_t arr[size];
    create(arr, size);
    int data;

    while (1)
    {
        printf("1.Insert_data_In_hash_table\n2.Display Data\n3.Search_data\n4.Delete_data_from_Hashtable\n5.Delete_Hash_table\n6.Exit\nChoose option:");
        int op;
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Enter the data: ");
            scanf("%d",&data);
            insert_data(arr, data, size);
            break;
        case 2:
        Display(arr,size);
        break;
        case 3:
        printf("Enter the data:");
        scanf("%d",&data);
        if(search(arr,size,data)==-1)
        {
            printf("Data Is not found\n");
        }
        break;
        case 4:
         printf("Enter the data: ");
        scanf("%d",&data);
        delete_element(arr,size,data);
        break;
        case 5:
        delete_table(arr,size);
        break;
        default:
            break;
        }
    }
}