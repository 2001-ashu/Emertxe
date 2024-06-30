// #include <stdio.h>
// #include <unistd.h>
// int main()
// {
// 	int i = 1;
// 	  while(i<=100)
// 	 {
// 	printf("Loading [");
// 	for (int j = 1; j <= 100; j++)
// 	{
// 		if (j <= i)

// 			printf("-");

// 		else
// 			printf(" ");
// 	}
// 	printf("]%d%%", i);
// 	fflush(stdout);
// 	printf("\r");
// 	sleep(1);
// 	i++;
// }
// printf("\n");
// printf("Loading Completed..");
// }
// /*
// Name:
// Date:
// DESCRIPTION:
// SAMPLE I/P:
// SAMPLE O/P:

//  */

// #include<stdio.h>
// #include<unistd.h>
// int main()
// {
//     int i=1;
//     while(i<=100)
//     {
// 	printf("Loading [");
// 	for(int j=1;j<=100;j++)
// 	{
// 	    if(j<=i)
// 	    {
// 		printf("-");
// 	    }
// 	    else
// 	    {
// 		printf(" ");
// 	    }
// 	}
// 	printf("]%d%%",i);
// 	fflush(stdout);
// 	printf("\r");
// 	usleep(50000);
// 	i++;

//     }
//     printf("\n");
//     printf("Loading Completed..");

//     return 0;
// }
/*
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:

 */

// #include<stdio.h>
// #include<unistd.h>
// int main()
// {
//     int i=1;
//     while(i<=100)
//     {
// 	printf("Loading [");
// 	for(int j=1;j<=100;j++)
// 	{
// 	    if(j<=i)
// 	    {
// 		printf("-");
// 	    }
// 	    else
// 	    {
// 		printf(" ");
// 	    }
// 	}
// 	printf("]%d%%\r",i);
// 	fflush(stdin);
// 	//printf("\r");
// 	sleep(1);
// 	i++;


//     }
//     printf("\n");
//     printf("Loading Completed..");

//     return 0;
// }


#include<stdio.h>
#include<unistd.h>

int main() {
    int i = 1;
    while (i <= 100) {
        printf("Loading [");
        for (int j = 1; j <= 100; j++) {
            if (j <= i) {
                printf("-");
            } else {
                printf(" ");
            }
        }
        printf("]%d%%\r", i);
         fflush(stdout); // Flushing stdout if necessary
        sleep(1);
        i++;
    }
    printf("\nLoading Completed..\n");
    return 0;
}






