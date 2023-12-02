  
 #include <stdio.h>

int main() {
   float length, width, c;

   printf("Enter the length of the rectangle: ");
   scanf("%f", &length);

   printf("Enter the width of the rectangle: ");
   scanf("%f", &width);

   c=(2 * (length + width));
	printf("%f is circumference of Rectangle",c);
   
   return 0;
}
