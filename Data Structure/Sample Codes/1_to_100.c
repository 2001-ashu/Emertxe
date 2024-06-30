#include <stdio.h>
int print(int num,int i)
{
    if (i <= num)
    {
        printf("%d ", i);
        print(num,++i);
        
    }
   
}
int main()
{
    int num;
    printf("Enter a limit:");
    scanf("%d", &num);
    int i=1;
    print(num,i);
}