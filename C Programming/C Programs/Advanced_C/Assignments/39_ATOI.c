/*
NAME:
DATE:
DESCRIPTION:
SAMPLE I/P:
SAMPLE 0/P:
*/

#include <stdio.h>

int my_atoi(const char *arr);

int main()
{
	char str[20];

	printf("Enter a numeric string : ");
	scanf("%s", str);

	printf("String to integer is %d\n", my_atoi(str));
}

int my_atoi(const char *arr)
{
	int i,j,num = 0;
	for(i=0;arr[i] != '\0';i++)
	{
		if(arr[i] == '+')
		{
			i++;
		}
		if(arr[i]>= '0' && arr[i] <= '9')
		{
			num = num * 10;
			num = (arr[i] - 48) + num;
		}
		else
		{
			break;
		}
	}
	int k=0;
	if(arr[k]=='-')
	{
		for(int i=1;arr[i];i++)
		{
			if(arr[i]>= '0' && arr[i] <= '9')
		{
			num = num * 10;
			num = (arr[i] - 48) + num;
		}
		}
		return (-num);
	}
	return num;
}
