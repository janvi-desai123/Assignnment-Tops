//Loops can execute a block of code as long as a specified condition is reached.
//Loops are handy because they save time, reduce errors, and they make code more readable.
//The while loop loops through a block of code as long as a specified condition is true.
	
		//while(condition)
		//{
			//statement
		//}
		
#include<stdio.h>
int main()
{
	int i = 0;

	while (i < 5)
	 {
	  printf("%d\n", i);
	  i++;
	}
	
	return 0;
}
//debug 
//1)i=0 0<5 true print: 0 i++ i=1
//2)i=1 1<5 true print: 1 i++ i=2
//3)i=2 2<5 true print: 2 i++ i=3
//4)i=3 3<5 true print: 3 i++ i=4
//5)i=4 4<5 true print: 4 i++ i=5
//6)i=5 5<5 false exit from loop

