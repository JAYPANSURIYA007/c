#include<stdio.h>
int
main ()
{

  int i;
  int K=1;

  for (i = 0; i < 5; i++)
	{
	  for (int j = 1; j <= 5; j++)
		{

		  printf ("%d\t", K);
		  K++;
		}

	  printf ("\n");
	}
  return 0;
}