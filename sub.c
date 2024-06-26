#include<stdio.h>
int main()
{
int i,sub[5],student[3];
int total=0;
float per=0;

	for(i=0;i<3;i++)
	{
		
		printf("\nenter the roll no.:");
		scanf("%d",&student[i]);
		total=0;
		for(int j=0;j<5;j++)
		{
			printf("enter  mark:");
			scanf("%d",&sub[j]);
			total+=sub[j];
		}
		per=total/5.0;
		printf("roll no: %d\n",student[i]);
		printf("total marks %d\n",total);
		printf("per %f\n",per);
		
		if(80<per&& 100>per){
			printf("grade A");
	}	else if (60<per&&per<80){
		printf("grade B");
	}else if(40<per&&per<60)
	{
printf("grade C ");
	} else{
printf("fail");
	}	
	}
return 0;
}	