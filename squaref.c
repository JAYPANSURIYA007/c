#include<stdio.h>
 void sum();     
 int sum1()
 {
	float l,a;
	
	printf("enter the l:");
	scanf("%f",&l);
	a=l*l;
	return a;
 
 }
 int main(){
 int total;
	total=sum1();
	printf("the total is :%d",total);
	return 0;
 }
 