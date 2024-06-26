
#include<stdio.h>
void sum();
int sum1(){
	float f,c;

	printf("enter the celcious:");
	scanf("%f",&c);
	f=(c*9/5)+32;
	return f;
	}
	int main(){
	    int total;
	total=sum1();
	printf("total is :%d",total);
	return 0;
	}