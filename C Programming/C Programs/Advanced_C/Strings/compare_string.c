// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char str[50],str1[50];
    printf("Enter String:");
    scanf("%[^\n]",str);
    getchar();
    printf("Enter String:");
    scanf("%[^\n]",str1);
    int i=0,j=0;
    while(str[i++]!='\0');
    while(str1[j++]!='\0');
    printf("%d\n%d\n",i,j);
    if(i!=j)
    {
        printf("Both strings are different:\n");
        return 0;
    }
    int flag=0;
    for(int i=0;str[i];i++)
    {
        if(str[i]!=str1[i])
        {
            flag++;
            break;
        }
        
    }
    if(flag==0)
    {
        printf("strings are  same\n");
    }
    else
    {
        printf("Strings are not same\n");
    }

   
    return 0;
}