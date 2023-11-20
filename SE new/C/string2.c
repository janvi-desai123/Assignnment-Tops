#include<stdio.h>
int main()
{
	int i;
	char name[]={'j','a','n','v','i'};
	name[3]='n';//update
	name[5]='i';//add
	printf("%c",name[1]);//access
	for(i=0;i<5;i++)
	{
		printf("\n%c",name[i]);
		
	}
	return 0;
}
