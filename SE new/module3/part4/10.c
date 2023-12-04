#include<stdio.h>
void palindrome(int n);
int main()
{
    int number;
    
     
    printf("\n  Enter The Number:");
    scanf("%d",&number);
     palindrome(number);
    return 0;
}
void palindrome(int n)
{
	int i,number,r,s=0,copy;
	copy=n;
    //LOOP FOR FINDING THE REVERSE OF A NUMBER
    for(i=n;i>0; )
    {
        r=i%10;
        s=s*10+r;
        i=i/10;
    }
     
    printf("\n  The Reverse Number of %d is %d",n,s);
    if(copy==s)
    {
    	printf("\nnumber is palindrome");
	}
	else{
		printf("\nnumber is not palindrome");
	}
}
