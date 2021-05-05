#include<stdio.h>
int main()
{
	int foot;
	int inch;
	
	scanf("%d %d",&foot,&inch);
	printf("…Ì∏ﬂ «%.2fm°£\n",((foot+inch/12.0)*0.3048));
	return 0;
}
