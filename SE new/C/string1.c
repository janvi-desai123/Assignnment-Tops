#include<stdio.h>
#include<string.h>
int main()
{
	char i,name[100],str3[100];
	char str2[]={'h','e','l','l','o'}, str1[]={'H','i','i'};
		printf("enter your name");
		scanf("%s",&name);
		printf("my name is %s",name);

		for(i=0;i<5;i++)  using character array loop
		{
		scanf("%c",&name[i]);
		}
	
	for(i=0;i<=5;i++)
		{
		printf("%c",name[i]);
		}


	
	return 0;
}
