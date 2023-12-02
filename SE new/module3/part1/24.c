#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,total,avg;
	printf("enter salary of 5 employees");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	total=s1+s2+s3+s4+s5;
	avg=total/5;
	printf("total salary is %d",total);
	printf("%d is average salary",avg);
	return 0;
}
