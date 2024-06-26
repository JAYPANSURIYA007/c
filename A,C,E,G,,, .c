#include<stdio.h>
int
main ()
{
  int  i;
  char c ='A';
  printf ("enter the alfabet:");
  scanf ("%c", &c);
  for (i = 'A'; i <= 'Z'; i++)
	{
        if(i%2!=0)       
	  printf ("%c\t", i);
	}

  return 0;
}
