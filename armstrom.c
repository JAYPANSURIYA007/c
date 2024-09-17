#include <stdio.h>
#include <math.h>
int main()
{

  int n, t, temp, digit, count = 0, rem, sum = 0;
  printf("enter the number:");
  scanf("%d", &n);
  t = n;
  temp = n;
  while (n != 0)
  {
    digit = n % 10;
    count = count + 1;
    n = n / 10;
  }
  n=temp;
  while (t != 0)
  {
    rem = t % 10;
    sum = sum + pow(rem, count);
    t = t / 10;
  }
  if (sum == temp)
  {
    printf("%d is armstrong", temp);
  }
  else
  {
    printf("%d is not armstrong", temp);
  }
  return 0;
}