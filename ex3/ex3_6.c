#include<stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	int digit;
	int ret=0;
	while (x > 0)
	{
		digit = x%10;
		x /= 10;
		ret = 10*ret + digit;
		printf("%d %d %d\n",digit,x,ret);
	}
	return 0;
}
