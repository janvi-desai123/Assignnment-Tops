#include<stdio.h>
struct employee{
	int eno;
	int age;
	char name[100];
	char address[100];
};
int main()
{
	
	struct employee e1;
	struct employee e2;
	char name1[100];
	char add[100];
	printf("enter employee no,name,age and address");
	scanf("%d %d",&e1.eno,&e1.age);
	scanf("%s",&name1);
	scanf("%s",&add);
	strcpy(e1.name,name1);
	strcpy(e1.address,add);
	printf(" \nemployee no is %d,\nage is %d ,\nname is %s and \naddress is %s",e1.eno,e1.age,e1.name,e1.address);
	return 0;
}
