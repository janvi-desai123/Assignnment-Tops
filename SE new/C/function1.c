#include<stdio.h>
void info()//defination
{
	printf("\nhello info function");	
}
int main()
{
	info();//call
	info();
	printf("\nhello main function");
	info();
	return 0;
}

