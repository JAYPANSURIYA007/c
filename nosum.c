#include<stdio.h>
int main()
{
	int i,n,odd,even;
	odd=0;
	even=0;
	int arr[i];
	
	printf("enter the number:");                                                                                            
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("enter the element of%d:",i);
	scanf("%d",&arr[i]);	
	}
	for(i=0;i<n;i++)
	{
	if(arr[i]%2==0)	{
		odd+=arr[i];
	}
	else{
		even+=arr[i];
		}
	}
	printf("%d\n",odd);
	printf("%d\n",even);
	return 0;
	}