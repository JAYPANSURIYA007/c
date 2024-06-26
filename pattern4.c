#include<stdio.h>
void pattern(){
    int i,j,k,l,m,p;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            printf(" ");
        }
        for(k=1;k=2*i-1;k++){
            printf("*");
        }printf("\n");
    }
    for(l=5;l>=1;l--){
        for(m=1;m<=5;m++){
            printf(" ");
        }
        for(p=1;p<=2*l-1;p++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    pattern();
    return 0;
}