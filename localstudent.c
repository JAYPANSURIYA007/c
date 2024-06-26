#include<stdio.h>
int  marks(){
    int maths,phy,chem;
    printf("enter the maths marks:");
    scanf("%d",&maths);
     printf("enter the phy marks:");
    scanf("%d",&phy);
     printf("enter the chem marks:");
    scanf("%d",&chem);
   int  total= maths + phy + chem;
   return total;
}
void total(){
int total;
total =marks();
printf("%d\t",total);
float per = total / 3.0;
printf("%f",per);}


int main(){
  
    total();
}