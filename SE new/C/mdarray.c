#include<stdio.h>
int main()
{
	int num[100][100],i,j,r,c;
	printf("enter how many row you want?");
	scanf("%d",&r);
	printf("enter how many coloum you want?");
	scanf("%d",&c);
	printf("enter total %d elements ",r*c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",num[i][j]);
		}
		printf("\n");
	}
	return 0;
}
