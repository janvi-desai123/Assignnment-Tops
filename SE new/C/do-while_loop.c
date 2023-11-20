//The do/while loop is a variant of the while loop. 
//This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

//do{
	//statement
//}while(condition);

#include<stdio.h>
int main()
{
	int i = 0;

	do {
	  printf("%d\n", i);
	  i++;
	}
	while (i < 5);
	
	
	return 0;
}
//debug
//1) i=0 print:0 i++ i=1 1<5 true than again 
//2) i=1 print:1 i++ i=2 2<5 true than again
//3) i=2 print:2 i++ i=3 3<5 true than again
//4) i=3 print:3 i++ i=4 4<5 true than again
//5) i=4 print:4 i++ i=5 5<5 false exit from loop
