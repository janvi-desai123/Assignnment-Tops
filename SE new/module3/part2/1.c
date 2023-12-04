#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter two numbers");
	scanf("%d %d",&num1,&num2);
	
	if(num1==num2)
	{
		printf("both are same");
	}
	else{
		printf("both are not equal");
	}
	return 0;
}
