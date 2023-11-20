#include<stdio.h>
int main()
{
	int Num = 15;  		// Num is 15
	int OtherNum = 23;
	Num = 10; 	  		// Now Num is 10
	Num = OtherNum;		//Num is now 23, instead of 15
	printf("%d", Num);
	return 0;
}
