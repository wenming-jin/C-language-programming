#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d %d",&a, &b); 
	int sum, difference, product;
	sum = a+b;
	difference = a-b;
	product = a*b;
	printf("%d",a);
	printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d",&a, &b, &sum, &a, &b, &difference, &a, &b, &product);
	
	return 0;
} 
