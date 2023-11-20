#include<stdio.h>
int main()
{
	// Create variables
	int Num = 5;             	// Integer (number without point)
	float FloatNum = 5.99;  	 // Float (number with point)
	char Letter = 'D';       	// Character
	
	// Print variables
	printf("%d\n", Num);		//format specifier %d or %i for int
	printf("%f\n", FloatNum);	//format specifier %f for float
	printf("%c\n", Letter);	//format specifier %c for character
	printf("My favorite number is: %d\n", Num);	//To combine both text and a variable, separate them with a comma inside the printf() function
	printf("My number is %d and my letter is %c", Num, Letter);	
	return 0;
}
//Variables are containers for storing data values, like numbers and characters.

