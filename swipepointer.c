#include<stdio.h>
int main(){
    int a1=50;
    int b1=70;
    int *c1=&a1;
    int *d1=&b1;
    *c1=*c1+*d1;
     int a=10;
    int b=20;
    
     a=a+b;//30
    *d1=*c1-*d1; 
    b=a-b;//10
    *c1=*c1-*d1;
    a=a-b;//20
    printf("%d\n",*c1);
    printf("%d\n",*d1);
    
   
    a=a-b;//-10
    b=a+b;//10
    a=b-a;//20
    printf("%d\n",a);
    printf("%d",b);
    
  
}