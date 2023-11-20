//The continue statement breaks one iteration (in the loop), if a specified condition occurs, 
//and continues with the next iteration in the loop.

#include<stdio.h>
int main()
{
	

		int i = 0;
		
		while (i < 10) {
		  if (i == 4) {
		    i++;
		    continue;
		  }
		  printf("%d\n", i);
		  i++;
		}
	return 0;
}
