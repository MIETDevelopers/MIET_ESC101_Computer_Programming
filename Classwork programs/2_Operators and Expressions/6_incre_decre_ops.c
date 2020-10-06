//Program to understand increment and decrement operators available in C
#include <stdio.h>
void main() {
   int a = 5;
   int c ;
   // Implementation of ++a operator
   c = ++a; 
   printf("Line 1 - Value of c is %d\n", c );
   printf("Line 1 - Value of a is %d\n", a );
   // Implementation of a++ operator
   c = a++; 
   printf("Line 2 - Value of c is %d\n", c );
   printf("Line 2 - Value of a is %d\n", a );
   // Implementation of --a operator
   c = --a; 
   printf("Line 3 - Value of c is %d\n", c );
   printf("Line 3 - Value of a is %d\n", a );
   // Implementation of a-- operator
   c = a--; 
   printf("Line 4 - Value of c is %d\n", c );
   printf("Line 4 - Value of a is %d\n", a );
}