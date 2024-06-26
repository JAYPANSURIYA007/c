#include<stdio.h>
int
main ()
{

  int i;

  for (i = 0; i < 5; i++)
	{
	  for (int j = 11; j <= 15; j++)
		{

		  printf ("%d\t", i*10+j);
		}

	  printf ("\n");
	}
  return 0;
}
