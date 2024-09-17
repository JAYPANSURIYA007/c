// #include<stdio.h>
// int main()
// {
// 	int i=1,j,k;
		
// 		for(i=1;i<=5;i++){
// 		for(j=1;j<=5-i;j++){
// 		printf("");}
		
// 		for(k=1;k<=i-1;k++){
// 		printf("*");
// 		}
// 		printf("\n");
		
// 		}
// 		return 0;
		

// }
#include<stdio.h>
int main(){
    int n,r,p;
    printf("enter no:");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        printf("%d",r);
        n=n/10;
    }
        return 0;
}