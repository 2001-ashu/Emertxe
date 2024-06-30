#include<stdio.h>
int main()
{
    int num=1;
    for (int  i = 0; i < 4; i++)
    {
        for (int j = i; j < 4; j++)
        {
            printf("%d\t",num++);
            
        }
        printf("\n");
        
    }
    
}
