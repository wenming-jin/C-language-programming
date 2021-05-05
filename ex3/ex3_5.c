#include<stdio.h>

int main()
{
	int number;
	int sum = 0;
	int count = 0;
	scanf("%d\n", &number);
	while(number != -1)
	{
		sum += number;
		count++; 
		printf("sum=%d count =%d\n",sum,count);
		scanf("%d\n", &number);
		
	}
	
	
	double average = sum/count;
	printf("%f",average);
	
	return 0;
}
