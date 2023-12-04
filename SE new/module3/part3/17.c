#include<stdio.h>
int main()
{
	int i=0,num,even=0,odd=0;
	while(i<5)
	{
		printf("enter %d value",i+1);
		scanf("%d",&num);
		if(num%2==0)
		{
			even++;
		}
		else{
			odd++;
		}
		i++;
	}
	printf("total odd numbers: %d",odd);
	printf("\ntotal even numbers: %d",even);
	return 0;
}
