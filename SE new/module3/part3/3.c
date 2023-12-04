#include<stdio.h>
int main()
{
	int i,num,odd=0,even=0,odd_sum=0,even_sum=0;
	
	for(i=0;i<10;i++)
	{
		printf("\nenter %d value",i+1);
		scanf("\t%d",&num);
		if(i%2==0)
		{
			even++;
		}
		else{
			odd++;
		}
		if(i%2!=0)
		{
			odd_sum=odd_sum+num;
		}
		else{
			even_sum=even_sum+num;
		}
	}
	printf("total odd numbers %d",odd);
	printf("\ntotal even numbers %d",even);
	printf("\nsum of odd numebrs %d",odd_sum);
	printf("\nsum of even numebrs %d",even_sum);
	return 0;
}
