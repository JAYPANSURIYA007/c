#include<stdio.h>
int
main ()
{
  int n, i;
  printf ("enter the number:");
  scanf ("%d", &n);
  for (i = 1; i <= n; i++)
	{
	  if (i % 2 != 0)
		{
		  printf ("%d\t", i);
		}
	  else
		{
		  printf ("%d\t", i * i);
		}
	} 
	return 0;
}
