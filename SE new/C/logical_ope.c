#include<stdio.h>
int main()
{
	int x=2;
	//Logical operators are used to determine the logic between variables or values
	//AND (&&) operator returns true only when all conditions are true.
	//OR (||) opearator returns true atleast if any one condition is true.
	//NOT (!) operator Reverse the result, returns false if the result is true
	printf("%d",x < 5 &&  x < 10)// return true because x is less than 5 and also less than 10 both of them conditions are true.
	printf("%d",x < 5 || x < 1)//returns true because ant one condition is true from them.
	printf("%d",!(x < 5 && x < 10))//returns false because, ir reverse the result.
	
	return 0;
}
