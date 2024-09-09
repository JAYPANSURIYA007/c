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