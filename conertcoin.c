#include<stdio.h>
void coin(){
       int amt;
       int first=0,second=0,fifth=0,ten=0,twenty=0,n;
       printf("enter the amount : ");
       scanf("%d",&amt);
       { 
        for( amt=0;amt<n;amt++){
              if(amt>=38){

                first++;
                second++;
                fifth++;
                ten++;
                twenty++;
                amt-=38;

              } 
              if(amt>=20){

                twenty++;
                amt-=20;

              } 
              if(amt>=10){

                ten ++;
                  amt-=10;

              } 
              if (amt>=5){

                fifth++;
                  amt-=5;

              }
               if (amt>=2)
              {
                second++;
                  amt-=2;


              }
              if (amt>=1){

                first++;
                  amt-=1;

              }
                printf("%d\n",twenty);
                printf("%d\n",ten);
                printf("%d\n",fifth);
                printf("%d\n",second);
                printf("%d\n",first);
             
              }
       }
              
}
int main(){
        coin();
    return 0;
}