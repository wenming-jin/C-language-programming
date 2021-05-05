#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int i = 1;
	int result = 1;
	while(i <= n)
	{
		result = result*i;
		i++;
	}
	printf("%d", result);
	return 0;
}
