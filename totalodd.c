
#include<stdio.h>
int
main ()
{
  int i,n;
  int sum=0;
  
  printf ("enter the number:");
    scanf("%d",&n);
  for (int i = 1; i <= n; i++)
	if(i%2!=0){
	sum=i+sum;
	  
	  printf ("%d\t", i);
	}
  printf ("the total number is:%d", sum);
  return 0;

}
