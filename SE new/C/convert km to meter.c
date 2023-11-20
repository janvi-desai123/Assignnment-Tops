#include<stdio.h>
int main()
{
	float km,m,mm;
	printf("enter kilometer");
	scanf("%f",&km);
	m=km*1000;
	mm=km*1000000;
	printf("kilometer is %f \n \t so meter is %f",km,m);
	
	printf("\nkilometer is %f \n\t so milimeter is %f",km,mm);
	
	return 0;
}
