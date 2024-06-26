#include<stdio.h>
void intres(int p,int r,int n)
{
 int intres;
   
    intres=p*r*n/100;
    printf("%d",intres);

}
int main(){
   intres(100,2,2);

   
   return 0;
}