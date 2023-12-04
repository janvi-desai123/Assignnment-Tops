#include<stdio.h>
int main()
{
	int i=0,num,rev=0,rem,copy;
	while(i<3)
	{
		printf("\nenter %d number",i+1);
		scanf("%d",&num);
		copy=num;
		printf("you enter %d",num);
		while(num!=0)
		{
//			rem=num%10;
//			rev=rev*10+rem;
//			num=num/10;
			rem = num % 10;
    		rev= rev * 10 + rem;
    		num /= 10;
		}
		printf("\treverse is %d",rev);
		
		if(copy==rev)
		{
			printf("\t%d is palindrome number",copy);
		}
		else{
			printf("\t%d is not palindrome number",copy);
		}
		rev=0;
		i++;
	}
	return 0;
}
