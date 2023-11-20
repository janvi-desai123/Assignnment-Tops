#include<stdio.h>
int main()
{
	int Intnum;
	float Floatnum;
	double Doublenum;
	char Character;
	//size of operator gives the memory size of variable in bytes.
	printf("%lu\n", sizeof(Intnum));
	printf("%lu\n", sizeof(Floatnum));
	printf("%lu\n", sizeof(Doublenum));
	printf("%lu\n", sizeof(Character));
	
	
	return 0;
}
//we use the %lu format specifer to print the result, instead of %d. 
//It is because the compiler expects the sizeof operator to return a long unsigned int (%lu), instead of int (%d).
