#include<stdio.h>
int
main ()
{

  int i;
  int K='A';

  for (i = 0; i < 5; i++)
	{
	  for (int j = 1; j <= 5; j++)
		{

		  printf ("%c\t", K);
		  K++;
		}

	  printf ("\n");
	}
  return 0;
}