#include<stdio.h>

int main()
{
	int a,b;
	printf("请输入两个整数：\n");
	scanf("%d %d",&a,&b);
	float average = (a + b)/2.0;
	printf("\n平均数为：%.2f\n",average);
	 
	return 0;
} 
