#include<stdio.h>
int main(){
    int a=50;
    int b=70;
    int *c=&a;
    int *d=&b;
    *c=*c+*d;
    *d=*c-*d;
    *c=*c-*d;
    printf("%d\n",*c);
    printf("%d",*d);
    
    
  
}