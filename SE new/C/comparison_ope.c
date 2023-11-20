#include<stdio.h>
int main()
{
	//Comparison operators are used to compare two values (or variables). 
	//The return value of a comparison is either 1 or 0, which means true (1) or false (0). 
	int x=5,y=10;
	printf("%d",x>y);//returns 0 (false) because 10 is greater than 5
	printf("\n%d",x<y);//returns 1 (true) because 5 is less than 10
	printf("\n%d",x==y);//equal to (==) operator check that the both variable having same value or not.if both are same than it returns 1.
	printf("\n%d",x!=y);//not equal to(!=) operator check that the both variable having same value or not.if both are not same than it returns 1.
	printf("%d",x>=y);//returns 0 (false) because x is not equal to 10 and x is less than 10.
	printf("\n%d",x<=y);//returns 1.(<=) check that value is equal or less than to another.
	return 0;
}
