#include<stdio.h>

int main()
{
	int x;
4	scanf("%d", &x);
	int i;
	int isPrime = 1;
	for (i=2; i<x; i++)
	{
		if (x%i == 0)
		{
			isPrime = 0;
			break; 
		}
	}
	if (isPrime == 1)
	{
		printf("The number is a prime number.");
	}
	else
	{
		printf("The number isn't a prime number.");
	}
	return 0;
}
