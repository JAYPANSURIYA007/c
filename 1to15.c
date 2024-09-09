// #include<stdio.h>
// int
// main()
// {
//   int i, j;
//   int k=1;
//   for (i = 1; i <= 5; i++)
// 	{
// 	  for (j = 1; j<= i; j++)
// 		{
// 		  printf ("%d\t", k);
// 	k++;
// 	}
// 	  printf ("\n");
// 	}
// }
#include <stdio.h>
int main()
{
  int i, n;
  int sum;

  printf("enter the number:");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {

    printf("%d\t", i * i);
  }
   printf("\n");
  return 0;
}