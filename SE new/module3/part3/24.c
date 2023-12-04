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
			printf("%d",i);
		}
		else{
			printf("%d+",i);
		}
		
	}
	return 0;
}
