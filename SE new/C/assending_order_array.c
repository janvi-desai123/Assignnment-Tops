#include<stdio.h>
int main()
{
	int number[100],n,i,j,temp;
	printf("how many elements you want to enter?");
	scanf("%d",&n);
	printf("enter elements"); 
	for(i=0;i<n;i++)
	{
		scanf("%d",&number[i]);
	}
	printf("before assending order array is:");
	for(i=0;i<n;i++)
	{
		printf("%d",number[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(number[i]>number[j])
			{
				temp=number[i];
				number[i]=number[j];
				number[j]=temp;
			}
		}
		}	
		printf("after assending order array is:");
		for(i=0;i<n;i++)
	{
		printf("%d",number[i]);
	}

		
		
		
	return 0;
}
