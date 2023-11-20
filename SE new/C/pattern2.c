#include <stdio.h>
 
int main()
{
    int i,j,rows = 5;
 
    // first loop for printing rows
    for ( i = 1; i < rows; i++) {
 
        // second loop for printing character in each rows
        for ( j = 1; j <= i; j++) {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
