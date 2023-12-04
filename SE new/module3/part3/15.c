#include<stdio.h>
int main()
{
	int i,num,sum=0;
	while(i<=10)
	{
		printf("enter %d value",i+1);
		scanf("%d",&num);
		sum=sum+num;
		
		i++;
	}
	printf("sum is %d",sum);
	return 0;
}
