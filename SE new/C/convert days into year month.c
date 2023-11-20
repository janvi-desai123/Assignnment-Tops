#include <stdio.h>
int main()
{
    int total_days,year,month,rem;
    printf("Enter number of days : ");
    scanf("%d",&total_days);
    year=total_days/365;
  	rem=total_days%365;
    month=rem/30;
    rem=rem%30;
    printf("\n%d years, %d months, %d days\n",year,month,rem);
    return 0;
}
