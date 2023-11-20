#include<stdio.h>
int main()
{
	int age;
	printf("enter your age");
	scanf("%d",&age);
	if(age>=18)
	{
			if(age==18)
			{
				printf("you are eligible for learning licence");
			}
			else{
				printf("you are eligible for driving licence");
			}
	}
	else{
		printf("you are not eligible for driving licence");
	}		
	
	
	
	return 0;
}
