#include <stdio.h>
int main()
{
        int num,cnt=0;
        printf("Enter number:");
        scanf("%d",&num);
        while(num!=1)
        {
                if(num%2!=0)
                {
                        cnt++;
                        break;
                }
                num=num/2;
        }
        if(cnt==0)
                printf("Given number is Power series of two\n");
        else
                printf("Given number is not Power series of two\n");

        return 0;
}