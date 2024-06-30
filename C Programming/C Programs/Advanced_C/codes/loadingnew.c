/*
NAME:
DATE:
DESCRIPTION:
SAMPLE I/P:
SAMPLE 0/P:
*/

#include<stdio.h>
#include<unistd.h>
int main()
{
	int i,j;
	for(i=1;i<=100;i++)
	{
		printf("Loading[");
		for(j=1;j<=100;j++)
		{
			if(j<=i)
			{
				printf("-");
			}
			else
			{
				printf(" ");
			}
		}
		printf("]%d%%",i);
		fflush(stdout);
		printf("\r");
		usleep(50);
	}
	printf("\n");
	printf("Loading completed\n");
}
	


