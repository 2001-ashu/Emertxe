#include<stdio.h>
void print(int limit)
{
    int n;
    if(limit!=0)
    {
        scanf( "%d", &n);
       
        print(limit - 1);
    
    }
     printf("%d ", n);
}
int main()
{
     int limit ;
     printf("Give Nos:");
     scanf("%d",&limit);
     print(limit);

}