#include<stdio.h>
int main()
{
	int i,num;
	printf("enter last value");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i==num)
		{
			printf("(%d*%d)",i,i);
		}
		else{
			printf("(%d*%d)+",i,i);
		}
		
	}
	return 0;
}
