#include<stdio.h>
int main()
{
	int arr[3][3];
	int total1=0;
	int total2=0;
	int total3=0;
	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	
	printf("enter the element of [%d] and [%d]:",i,j);
	scanf("%d",&arr[i][j]);
	}
	}

	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	
	printf("%d\t",arr[i][j]);
	
	}
	
	}
	int i,j;
	total1=arr[0][1]+arr[0][2]+arr[1][2];
	total2=arr[0][0]+arr[1][1]+arr[2][2];
	total3=arr[1][0]+arr[2][0]+arr[2][1];
	if( i<  j){
	printf("total of upper triangel:%d\t",total1);}
	else if (i>j)
	printf("total of diagonal :%d\t",total2);
    }else{
	printf("total of upper triangel:%d\t",total3);
    
	printf("\n");
    }
	return 0;
	}