#include<stdio.h>
int maths,phy,chem,total;
float per;
int  marks(){
    
    printf("enter the maths marks:");
    scanf("%d",&maths);
     printf("enter the phy marks:");
    scanf("%d",&phy);
     printf("enter the chem marks:");
    scanf("%d",&chem);
    total= maths + phy + chem;
  
}
void total1(){

marks();
printf("%d\t",total);
 per = total / 3.0;
printf("%f\n",per);}

void grade(){
    if(100>per && 80<per){
        printf("A grade");
    }else if (60<per && 80>per){
         printf("B grade");
    }else if (40<per && 60>per){
        printf("C grade");
    } else if (33<per && 40>per){
         printf("D grade");
    }else  {
        printf("FAIL");
    }
}

int main(){
  
    total1();
    grade();
}