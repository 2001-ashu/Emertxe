/*
Name:Ashutosh Uday Zende
Date:25/01/24
Description:A36 - WAP to count no. of characters, words and lines, entered through stdin
*/
#include<stdio.h>
int main()
{

    char ch,prev='\0';                                                          /*variable initialise*/
   
    int w=0,l=0,c=0;                                                            /*variable intialise*/
    while((ch=getchar())!=EOF)                                                  /*loop run until eof*/
    {


	c++;                                                                        /*character increament*/
	if (ch=='\n')                                                               /*condition for user prompt equals to enter button*/
	{
	    l++;                                                                    /*increment line count*/
	}

	if((ch==' ' || ch=='\t' ||ch=='\n') && !(prev ==' ' || prev =='\t' || prev =='\n') )
	{
	    w++;                                                                            /* increment word count*/
	}

	prev=ch;                                                                                /* prev equals to ch*/

    }
    printf("Character count : %d\n",c);
    printf("Line count : %d\n",l);
    printf("Word count : %d\n",w);
}
