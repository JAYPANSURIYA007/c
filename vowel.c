#include <stdio.h>  
 
int main ()  
{  
    char x;
    printf("enter the char : ");
    scanf("%c",&x);
    if(x=='a'||x=='e'||x=='o'||x=='i'||x=='u'){
        printf("%c is vowel:\n",x);
    }else{
        printf("%c is not vowel:\n",x);
    }
}