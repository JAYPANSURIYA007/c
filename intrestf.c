#include<stdio.h>
void sum();

	int sum1(){
	int p,r,n;
	float total;
	printf("enter the prise:");
	scanf("%d",&p);
	printf("enter the rate:");
	scanf("%d",&r);
	printf("enter the year:");
	scanf("%d",&n);
	
	total=p*r*n/100;
	
	return total;
	}
	int main()
	{
	int total;
	
	total=sum1();
	printf("total is:%d",total);
	return 0;
	}