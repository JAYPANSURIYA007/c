#include<stdio.h>
int main()
{
	int n;
	printf("enter array size :");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
	
	printf("enter the element of %d:",i);
	scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
	printf("%d\t",arr[i]);
}
		return 0;
		
}