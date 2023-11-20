//When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop.

//for (declartion of start-point;condition for ending the loop; increment)
// {
//   code block to be executed
//}

#include<stdio.h>
int main()
{
	
	int i;

	for (i = 0; i < 5; i++) {
	  printf("%d\n", i);
	}
return 0;
}
//debug
//1)i=0  0<5 print:0 i++ i=1
//2)i=1  1<5 print:1 i++ i=2
//3)i=2  2<5 print:2 i++ i=3
//4)i=3  3<5 print:3 i++ i=4
//5)i=4  4<5 print:4 i++ i=5
//6)i=5  5<5 false exit from loop

