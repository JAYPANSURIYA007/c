
#include<stdio.h>
void sum();
	int sum1(){
	int doller;
	int total;
	float rupees=83.32;
	printf("enter the doller:");
	scanf("%d",&doller);
	total=rupees*doller;
	return total;
	}
	int main()
	{
	int total;
	
	total=sum1();
	printf("total is:%d",total);
	return 0;
	}