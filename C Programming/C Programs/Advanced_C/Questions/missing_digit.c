#include<stdio.h>
int main()
{
        int no,tmp,dg,flg,rem;
        printf("\n Enter the no: ");
        scanf("%d",&no);
        tmp=no;
        printf("\n Missing Digits: ");
        for(dg=1;dg<10;dg++)
        {
                no=tmp;
                flg=0;
                while(no!=0)
                {
                        rem=no%10;
                        no=no/10;
                        if(rem==dg)
                        {
                                flg++;
                                break;
                        }
                }
                if(flg==0)
                        printf("%d ",dg);
        }
        return 0;
}