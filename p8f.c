#include<stdio.h>
int main()
{
	int i,j,k,l,m,p;
		
		for(i=1;i<=5;i++){
		for(j=1;j<=5-i;j++){
		printf(" ");
		}
		
		for(k=1;k<=2*i-1;k++){
		  
		printf("*");
		}
		printf("\n");
		
		}
		for(l=4;l>=1;l--){
		    for(m=1;m<=5-l;m++){
		        printf(" ");
		        }
		        for(p=1;p<=2*l-1;p++){
		       
		            
		            printf("*");
		            
		        }
		printf("\n");
		    
		}
		return 0;

}





