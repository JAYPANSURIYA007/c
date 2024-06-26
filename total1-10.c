#include<stdio.h>
int
main ()
{
  int i;
  int sum = 0;
  printf ("enter the number:");

  for (int i = 1; i <= 10; i++)
	{
	  sum = sum + i;
	  printf ("%d\t\n", i);
	}
  printf ("the total number is:%d", sum);
  return 0;

}



