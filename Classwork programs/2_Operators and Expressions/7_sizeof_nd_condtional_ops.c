//Program to understand sizeof operator and conditional operator available in C
#include <stdio.h>
void main() {
   int a = 4;
   short b;
   double c;
   int* ptr;
   // Implementation of sizeof operator
   printf("Line 1 - Size of variable a = %d\n", sizeof(a) );
   printf("Line 2 - Size of variable b = %d\n", sizeof(b) );
   printf("Line 3 - Size of variable c= %d\n", sizeof(c) );
   // Implementation of Conditional operator
   a = 10;
   b = (a == 1) ? 20: 30;
   printf( "Value of b is %d\n", b );
   b = (a == 10) ? 20: 30;
   printf( "Value of b is %d\n", b );
}