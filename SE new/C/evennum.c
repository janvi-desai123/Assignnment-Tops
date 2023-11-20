#include<stdio.h>
int main()
{
	int i,range=10;
	for(i=1;i<=range;i++)
	{
		printf("%d \t",i);
		}	
	printf("\neven numbers from above:");
	for(i=1;i<=range;i++)
	{
		if(i%2==0)
		{
			printf("\n%d",i);
		}
	}
	
	return 0;
}
