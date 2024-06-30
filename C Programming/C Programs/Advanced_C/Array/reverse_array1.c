
#include <stdio.h>
int main(){
    int n;
    printf("enter size:");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
     
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    printf("Reversed The Array...\n");
    for(int i = 0; i < n; i++){
        printf("arr[%d]:%d\n",i ,arr[i]);
    }
}