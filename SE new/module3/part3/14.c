#include<stdio.h>
int main()
{
	int i,num,fact=1,num2;
	
	for(i=0;i<5;i++)
	{
		printf("\nenter %d value",i+1);
		scanf("\t%d",&num);
		
		while(num>0)
		{
			fact=fact*num;
			num--;
		}
		printf("%d is factorial",fact);
		fact=1;
	}
	return 0;
}
