#include<stdio.h>
int main()
{
	int i,j,num[2][2],num1[2][2],result[2][2];
	
	printf("enter 4 values for 1st array");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	printf("enter 4 values for 2nd array");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&num1[i][j]);
		}
	
	}	
//	printf("%d",num[0][0]+num1[0][0]);							

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		result[i][j]=num[i][j]+num1[i][j];
	}
		printf("addition of two array");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
	{
			printf("%d\t",result[i][j]);
		}
		
		printf("\n");
	}
	
	
	return 0;
}

