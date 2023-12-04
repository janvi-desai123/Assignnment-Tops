#include <stdio.h>              //including stdio.h for printf and other functions



int main()                        //default function for call
{
	int a[100],n,i,j,choice;
	printf("Array size: ");
        scanf("%d",&n);
        printf("Elements: ");
       
		for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
	for ( i = 0; i < n; i++)                     //Loop for ascending ordering
	{
		for ( j = 0; j < n; j++)             //Loop for comparing other values
		{
			if (a[j] > a[i])                //Comparing other array elements
			{
				int tmp = a[i];         //Using temporary variable for storing last value
				a[i] = a[j];            //replacing value
				a[j] = tmp;             //storing last value
			}  
		}
	}
	 printf("enter 1 for assecding oreder AND 2 desecding order");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("\n\nAscending : ");                     //Printing message
	for ( i = 0; i < n; i++)                     //Loop for printing array data after sorting
	{
		printf(" %d ", a[i]);
	}
	for ( i = 0; i < n; i++)                     //Loop for descending ordering
	{
		for ( j = 0; j < n; j++)             //Loop for comparing other values
		{
			if (a[j] < a[i])                //Comparing other array elements
			{
				int tmp = a[i];         //Using temporary variable for storing last value
				a[i] = a[j];            //replacing value
				a[j] = tmp;             //storing last value
			}
		}
	}
			
			  }      
	  
	else if(choice==2)
	{
			printf("\n\nDescending : ");                    //Printing message
	for ( i = 0; i < n; i++)                     //Loop for printing array data after sorting
	{
		printf(" %d ", a[i]);                   //Printing data
	}
	}
	else{
		printf("invalid choice");
	}

	return 0;          //returning 0 status to system

}
