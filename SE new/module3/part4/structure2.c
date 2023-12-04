#include<stdio.h>
struct employee{
	int eno;
	int age;
	char name[100];
	char address[100];
};
int main()
{
	
	struct employee e1[100];
	int i;
	char name1[100];
	char add[100];
	printf("enter details for five employee");
	for(i=0;i<5;i++)
	{
	printf("\nenter employee no,name,age and address for %d employee",i+1);
	scanf("%d %d",&e1[i].eno,&e1[i].age);
	scanf("%s",&name1);
	scanf("%s",&add);
	strcpy(e1[i].name,name1);
	strcpy(e1[i].address,add);
	}
	for(i=0;i<5;i++)
	{
		printf("\ndetails of %d employee",i+1);
	printf(" \temployee no is %d,\tage is %d ,\tname is %s and \taddress is %s",e1[i].eno,e1[i].age,e1[i].name,e1[i].address);
	}	
return 0;
}
