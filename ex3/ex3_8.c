#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	int result = 1;
	int i = 1;
	for (i=1; i<=n; i++)
	{
		result *= i;
	}
	printf("%d", result);
	return 0;
}
