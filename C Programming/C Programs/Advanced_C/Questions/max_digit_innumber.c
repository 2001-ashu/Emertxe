
#include<stdio.h>
int main()
{
        int num,swap,tmp1=0,rem=0,tmp2=-10;
        printf("Enter the number :");
        scanf("%d",&num);
        swap=num;
        while(num!=0)
        {
                rem=num%10;
                if(rem>0)
                {
                        if(rem>tmp1)
                        {
                                tmp1=rem;
                        }
                }
                else if(rem<0)
                {
                        if(rem>tmp2)
                        {
                                tmp2=rem;
                        }
                }
                num=num/10;
        }
        if(swap>0)
                printf("maximum digit is: %d\n",tmp1);
        else
                printf("maximum digit is: %d\n",tmp2);

        return 0;
}