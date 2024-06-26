#include<stdio.h>
int main()
{
	int i=1;
    int n;

	printf("enter number:");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
	    printf("%d\t\n",i);
	}
	return 0;
	}