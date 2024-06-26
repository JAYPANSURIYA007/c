#include<stdio.h>
int total;
int substrec(int a,int b){
    
    total = a-b;
    return total;
}
int main(){
  
    total=substrec(50,20);
    printf("%d",total);
}