#include<stdio.h>
struct Student{
int age;
char name[50];
};
  int main(){
      

      struct Student st1[3];
      for(int i=0;i<3;i++){
        printf("enter the age:");
        scanf("%d",&st1[i].age);
        printf("enter the name:");
        scanf("%s",&st1[i].name);
        }
        for(int i=0;i<3;i++){
            printf("%d\n",st1[i].age);
            printf("%s\n",st1[i].name);
        }
      

    return 0; 
  }