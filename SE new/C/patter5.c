#include <stdio.h>
 
int main()
{
    int rows = 4;
    int temp= 1;
 
    // outer loop to print all rows
    for (int i = 0; i < rows; i++) {
 
        // innter loop to print abphabet in each row
        for (int j = 0; j <= i; j++) {
            printf("%d ", temp++);
        }
        printf("\n");
    }
    return 0;
}
