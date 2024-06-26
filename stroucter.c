#include<stdio.h>
struct Student{
     
      int age;
      char name[50];
};

    int main(){
       
        struct Student st1,st2;
        
        st1.age =10;
        printf("enter the name:");
        gets(st1.name);
        printf("age is:");
        printf("%d\n",st1.age);
        printf("%s\n",st1.name);

        st2.age=20;
        printf("enter the name:");
        gets(st2.name);
        printf("age is:");
        printf("%d\n",st2.age);
        printf("%s\n",st2.name);

        return 0;
    }