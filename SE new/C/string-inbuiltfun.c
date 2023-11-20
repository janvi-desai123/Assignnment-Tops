#include<stdio.h>
#include<string.h>
int main()
{
	char name[100]="janvi ";
	char name2[]="desaiii";
	char name3[10];
	
//	printf("%d",sizeof(name));//op: 100
//	printf("%d",sizeof(name2));//op: 8
//	printf("%d",strlen(name));//op: 6
//	printf("%d",strlen(name));//op: 6
//	strcat(name,name2);
//	printf("%s ",name);//op: janvi desai
	
	
//	strcpy(name3,name);
//	printf("%s",name3);//op: janvi

		
	//printf("%d",strcmp(name,name3));
	//printf("%d",strcmp(name,name2));

printf("%s",strrev(name));//op: ivnaj
	
	return 0;
}
