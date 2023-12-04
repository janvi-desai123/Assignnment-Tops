#include<stdio.h>
int main()
{
	int i,j,num=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=10;j++)
		{
			if(num>0 && num<=9)
			{
				printf("0%d\t",num++);
			}
			else{
				printf("%d\t",num++);
			}
		}
		printf("\n");
	}
	return 0;
}
