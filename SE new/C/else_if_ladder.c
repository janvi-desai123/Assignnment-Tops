#include<stdio.h>
int main()
{
	//Use the else if statement to specify a new condition if the first condition is false.
	int age;
	printf("enter your age");
	scanf("%d",&age);
	if(age>18)
	{
		printf("you are eligible for driving licence");
	}
	else if(age==18)
	{
		printf("you are eligible for learning licence");
	}
	else{
		printf("you are not eligible for learning licence");
	}
	
	
	return 0;
}
