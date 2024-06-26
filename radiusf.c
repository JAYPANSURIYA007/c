
#include<stdio.h>
void sum();
int sum1(){
	float r,a;
	 printf("enter the r:");
	 scanf("%f",&r);
	 a=3.14*r*r;
		return a;
		}
		int main(){
			int total;
			total=sum1();
			printf("enter the total:%d",total);
			return 0;
		
		}