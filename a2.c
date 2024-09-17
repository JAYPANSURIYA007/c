#include <stdio.h>
int main()
{
	int n;
	int x;
	printf("enter array size :");
	scanf("%d", &n);

	int arr[n];
	int abc[x];
	for (int i = 0; i < n; i++)
	{

		printf("enter the element of %d:", i);
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("enter array size :");
	scanf("%d", &x);

	for (int j = 0; j < x; j++)
	{

		printf("enter the element of %d:", j);
		scanf("%d", &abc[j]);
	}
	for (int j = 0; j < x; j++)
	{
		printf("%d\t", abc[j]);
	}
	return 0;
}