#include<stdio.h>
int main()
{
int num[100],i;
printf("enter 5 values");
	for(i=0;i<5;i++)
	{
		
		scanf("%d",&num[i])	;
	}
	for(i=0;i<5;i++)
	{
		if(num[i]%2==0)
		{
			printf("\teven: %d",num[i]);
		}
		else{
			printf("\todd: %d",num[i]);
		}
	}
	return 0;
}
