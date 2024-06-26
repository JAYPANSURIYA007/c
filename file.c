#include<stdio.h>
int main(){
    FILE *ptr;
    char string[50];
    ptr=fopen("my text.txt","a");
    gets(string);
    fprintf(ptr,"%s\t",string);
    // ptr=fopen("my text.txt","r");
    // while (fscanf(ptr,"%s",string)!=EOF)
    // {
    //     printf("%s",string);
    // }
    
}