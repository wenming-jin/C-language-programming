#include<stdio.h>

int main()
{
	int x;
	int i = 1;
	int count = 0;
	scanf("%d", &x);
	if (x == 1)
	{
		printf("The number is a prime number.");
	}
	else
	{
		for(i=1; i<=x; i++)
		{
			int remainder = x%i;
			if (remainder == 0)
			{
				count++;
			}
		}
	}
	if (count == 2)
	{
		printf("The number is a prime number.");
	}
	else if( x != 1)
	{
		printf("The number isn't a prime number.");
	}
	return 0;
}
