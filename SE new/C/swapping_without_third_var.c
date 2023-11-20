#include<stdio.h>
int main()
{
	//swapping without third variable... 
	int a=10,b=20;
	printf("before swap a=%d b=%d",a,b);
	a=a+b;//10+20=30
	b=a-b;//30-20=10
	a=a-b;//30-10=20
	printf("\nafter swap a=%d b=%d",a,b);
	return 0;
}
