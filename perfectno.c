#include<Stdio.h>
void perfect(){
    int n,i,sum;
    printf("enter the number\t:");
    scanf("%d",&n);
    sum=0;
  
    for(i=1;i<n;i++)

{
    if(n%i==0)
{
    sum=sum+i;
    printf("%d\t",i);
}
}
printf("\nthe sum of the divisors is \t: %d",sum);
if(sum==n){
    printf("this is perfect");
}else{
    printf("not prefect");
}
printf("\n");
}
int main(){
    perfect();
}