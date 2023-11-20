#include<stdio.h>
int main()
{
	//Use if to specify a block of code to be executed, if a specified condition is true
	//Use else to specify a block of code to be executed, if the same condition is false
	int age;
	printf("enter your age");
	scanf("%d",&age);
	if(age>18)
	{
		printf("you are eligible for driving licence");//statements
	}	//if the condition which is mentioned in if() is true than the staement of if is to be executed.
	else{
			printf("you are not eligible for driving licence");
	}	//if the condition which is mentioned in if() is false than the staement of else is to be executed.


	return 0;
	

}
