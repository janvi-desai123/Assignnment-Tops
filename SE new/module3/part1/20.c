#include<stdio.h>
int main(){
	float salary,pr,loan,remaining_SALARY;
	printf("enter your salary");
	scanf("%f",salary);
	pr=salary*0.10;
	loan=salary*0.10;
	printf("your premium amount is %f",pr);
	printf("your loan amount is %f",loan);
	remaining_SALARY=salary-pr-loan;
	return 0;
}
