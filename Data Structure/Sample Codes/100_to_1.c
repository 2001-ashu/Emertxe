#include <stdio.h>
int print(int num, int i)
{

    if (i < num)
    {

        print(num, ++i);
        printf("%d ", i);
    }
}
int main()
{
    int num;
    printf("Enter a limit:");
    scanf("%d", &num);
    int i = 0;
    print(num, i);
}