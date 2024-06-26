#include<stdio.h>
void patt(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if (i==0||j==0||i==4||j==4||i==j||(i+j)%2==0)
            {
                printf("*");
            }else{
                printf(" ");
            }}
            printf("\n");
        }
    }

int main(){
    patt();
    return 0;
}