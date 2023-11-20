#include<stdio.h>
int main()
{
	//To get user input, you can use the scanf() function
	int no1,no2,no3;
	scanf("%d",&no1);
	scanf("%d %d %d",&no1,&no2,&no3);//multiple user input
	return 0;
}
//The scanf() function takes two arguments: the format specifier of the variable (%d) and the reference operator (&no1), which stores the memory address of the variable.
