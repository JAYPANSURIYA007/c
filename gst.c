#include<stdio.h>

struct netbill{

   int  rate,qty,amt, dis,billamt,gst,netbill;
 
};
int main(){
    struct netbill netbill[3];

    int i;
    for(i=0;i<3;i++){
        
        printf("enter the rate: ");
        scanf("%d",&netbill[i].rate);
        printf("enter the qty:");
        scanf("%d",&netbill[i].qty);
        netbill[i].amt=netbill[i].rate *netbill[i]. qty;
        netbill[i].dis =netbill[i].amt*0.05;
        netbill[i]. billamt=netbill[i].amt-netbill[i].dis;
        netbill[i].gst=netbill[i].billamt*0.18;
        netbill[i].netbill=netbill[i].billamt+netbill[i].gst;

  printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t",netbill[i].rate ,netbill[i].qty, netbill[i].amt ,netbill[i].dis ,netbill[i].billamt ,netbill[i].gst, netbill[i].netbill); 
    }
}