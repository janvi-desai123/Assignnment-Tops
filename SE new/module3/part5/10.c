#include <stdio.h> 
#include <string.h> 
 
int main() { 
    char originalString[] = "Hello, World!"; 
    char substring[20]; // Allocate space for the substring 
 
    // Extract a substring starting from index 7 (inclusive) of length 5 
    strncpy(substring, originalString + 7, 5); // Copies 5 characters starting from index 7 
    substring[5] = '\0'; // Null-terminate the substring 
 
    printf("Original String: %s\n", originalString); 
    printf("Extracted Substring: %s\n", substring); 
 
    return 0; 
} 
