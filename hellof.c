#include<stdio.h>
int main(){
    char str[]="HELLO";
    for(int i=0;i<6;i++){
        for(int j=0;j<i;j++){
            printf("%c",str[j]);

        }
        printf("\n");
    }
return 0; 
}