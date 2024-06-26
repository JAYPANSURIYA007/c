#include<stdio.h>
struct Student{
     
      int age,marks,total;
      char name[50],sub[50];
      float per;
};

 int main(){
    struct Student st1[3],sub[5];
    for(int i=0;i<3;i++){
        printf("enter the name:");
        scanf("%s",&st1[i].name);


           for(int j=0;j<5;j++){
          printf("enter the sub:");
        scanf("%s %d",&st1[i].sub[j]);
          
           }
    }
 }
