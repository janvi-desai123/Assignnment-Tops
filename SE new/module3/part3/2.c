#include<stdio.h>
int main()
{
	int i,num;
	
	for(i=0;i<5;i++)
	{
		printf("\nenter %d value",i+1);
		scanf("\t%d",&num);
		printf("\t value is %d",num);
	}
	return 0;
}
