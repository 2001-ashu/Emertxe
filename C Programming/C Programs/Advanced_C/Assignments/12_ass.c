/*
Name:Ashutosh Zende
Date:14.02.2024
Title:WAP to print all primes using Sieve of Eratosthenes method
Sample input:
Enter the value of 'n' : 20
Sample output:
The primes less than or equal to 20 are : 2, 3, 5, 7, 11, 13, 17, 19
*/

#include<stdio.h>
int main()
{
int n, i, j;
printf("Enter the array size\n"); //read the size of the array
scanf("%d", &n);
if ( n > 1 )
{
int arr[n]; //generating the array elements starting from 2
for ( i = 0; i <= n-2 ; i++ )
{
arr[i] = i + 2;
}

for ( i = 2; i * i <= n; i++ )
{
for ( j = (i * 2) - 2; j <= n - 2; j = j + i) //inner loop gives multiple of i values
{
arr[j] = 0;
}
}

// printing the array of prime numbers
printf("The primes less than or equal to %d are :", n);
for ( i = 0; i <= n - 2; i++ )
{
if( arr[i] != 0 )
{
printf("%d ", arr[i]);
}
}
printf("\n");
}
else
{
printf("Please enter a positive number which is > 1");
}
return 0;
}

