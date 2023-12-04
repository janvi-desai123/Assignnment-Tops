#include<stdio.h>
int main()
{
	char name[25];
	int i;
	printf("enter 5 names at run time");
	for(i=0;i<5;i++)
	{
		printf("\nenter %d name",i+1);
		scanf("\t%s",&name);
		printf("\tyou entered %s",name);
	}
	
	return 0;
}
