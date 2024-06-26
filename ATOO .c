#include<stdio.h>
int
main ()
{
  int i, j;
  int k='A';
  for (i = 1; i <= 5; i++)
	{
	  for (j = 1; j<= i; j++)
		{
		  printf ("%C\t", k);

	k++;
	}
	  printf ("\n");
	}
}



