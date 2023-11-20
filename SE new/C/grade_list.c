#include <stdio.h>

int main()
{
    float marks1, marks2, marks3, pr,total;

    printf("Enter marks obtained in subject 1 :");
    scanf("%f", &marks1);
    printf("Enter marks obtained in subject 2 :");
    scanf("%f", &marks2);
    printf("Enter marks obtained in subject 3 :");
    scanf("%f", &marks3);
    
    total=marks1+marks2+marks3;

    pr = total*100/300;
    
    printf("Percantage : %0.2f\n", pr);//0.2f remove fraction part of float value. 0.2f will point only 2 value after point.

    if (pr >= 90)
    {
        printf("Grade A");
    }
    else if (pr >= 80)
    {
        printf("Grade B");
    }
    else if (pr >= 70)
    {
        printf("Grade C");
    }
    else if (pr >= 60)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}
