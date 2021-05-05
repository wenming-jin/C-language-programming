#include<stdio.h>

int main()
{
	int number = rand()%100+1;
	int count = 0;
	int a = 0;
	printf(" I have thought a number betwen 1 and 100\n");
	do
	{
		printf("Guess the number between 1 and 100\n");
		scanf("%d",&a);
		count++;
		if (a > number)
		{
			printf("big\n");
		}
		else if (a < number)
		{
			printf("small\n");
		}
	}
	while(a != number);
	printf("You use %d times to guess the number correctly!",count);
	return 0;
} 
