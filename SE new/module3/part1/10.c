#include<stdio.h>
int main()
{
	int h,l,w;
	printf("enter height, width and length for area of a rectangular using prism formula");
	scanf("%d %d %d",&h,&l,&w);
	ans=2((w*l)+(h*l)+(h*w));
	printf("area of a rectangular using prism formula is %d",ans);
	return 0;
}
