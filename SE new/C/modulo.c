#include<stdio.h>
int main()
{
	//modulo operator gives the reminder as output
	int no1,no2,ans;
	printf("enter values");
	scanf("%d %d",&no1,&no2);
	ans=no1%no2;
	printf("modulo of %d and %d is %d",no1,no2,ans);
	return 0;
}
