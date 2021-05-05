#include<stdio.h>

int main()
{
	int number;
	int sum = 0;
	int count = 0;
	scanf("%d", &number);
	while(number != -1)
	{
		sum = sum + number;
		count++; 
		printf("sum=%d count =%d\n",sum,count);
		scanf("%d", &number);
		
	}
	
	
	double average = 1.0*sum/count;
	printf("%.2f",average);
	
	return 0;
}
