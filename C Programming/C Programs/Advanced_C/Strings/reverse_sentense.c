#include<stdio.h>
int main()
{
        int i,j,m,n;
        char str[100];

        printf("Enter the string : ");
        scanf("%[^\n]",str);

        for(i=0;str[i];i++)
        {
                m=i;

                for(;str[i] != 32 && str[i];i++);
                n = i-1;

                for(;m<n;m++,n--)
                {
                        char ch = str[m];
                        str[m] = str[n];
                        str[n] = ch;
                }
        }
        printf("After converting : %s\n",str);
        
}