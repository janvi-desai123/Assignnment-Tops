#include<stdio.h>
int main()
{
	//Use if to specify a block of code to be executed, if a specified condition is true
	int age;
	printf("enter your age");
	scanf("%d",&age);
	if(age>18)
	{
		printf("you are eligible for driving licence");
	}
	
	return 0;
}
