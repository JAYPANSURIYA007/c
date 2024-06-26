#include<stdio.h>
float intres(int p,int r,int n){
    float area;
    area= p*r*n/100;
    return area ;
}
int main(){
    float area;
    area= intres(500000,1,5);
    printf("%f",area);
    return 0;
}