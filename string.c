#include<stdio.h>
int main()
{
	char name[50];
	
	gets(name);
	for(int i=0;name[i]!='\0'; i++)
	{
	printf("%c",name[i]);
	
	}
return 0;

}