#include<stdio.h>

int main()
{
	//×¢ÊÍ
	/*
	×¢ÊÍ 
	×¢ÊÍ 
	*/ 
	
	int a, b, c;
	int max;
	scanf("%d %d %d",&a, &b, &c);
	if(a > b){
		if(a>c)
			max = a;
		else
			max = c;
	}else{
		if(b>c)
			max = b;
		else
			max = c;
	}
	printf("max = %d",max);
	return 0;
} 
