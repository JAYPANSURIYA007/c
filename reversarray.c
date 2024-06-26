#include<stdio.h>

void reversarr(int n,int arr[]){
    int temp=0;
    int i,j;



    for(i=0,j=n-1;i<j;i++,j--){
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
   
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
int main(){
    int arr[5]={1,5,4,2,3};
    reversarr(5,arr);
}