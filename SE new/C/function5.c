#include<stdio.h>
void info(char name[100],int age);
int main()
{
	info("janvi",21);
	info("xyz",15);
	
	return 0;
}
void info(char name[100],int age)
{
	printf("Hello %s.. You are %d years old.\n", name, age);
}
