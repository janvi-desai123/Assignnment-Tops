#include<stdio.h>
int main()
{
	int i=5;
	do{
		printf("%d",i);
		i++;
	}while(i<5);
	
	//The loop will always be executed at least once, even if the condition is false, because the code block is executed before the condition is tested
	return 0;
}
