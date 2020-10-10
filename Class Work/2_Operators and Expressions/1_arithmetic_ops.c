//Program to understand all the arithmetic operators available in C
#include <stdio.h>
void main() {
   int a = 21;
   int b = 10;
   int c ;
   //Implementation of Addition Operator
   c = a + b;
   printf("Line 1 - Value of c is %d\n", c );
   //Implementation of Subtraction Operator
   c = a - b;
   printf("Line 2 - Value of c is %d\n", c );
   //Implementation of Multiplication Operator
   c = a * b;
   printf("Line 3 - Value of c is %d\n", c );
   //Implementation of Division Operator
   c = a / b;
   printf("Line 4 - Value of c is %d\n", c );
   //Implementation of Modulus Operator
   c = a % b;
   printf("Line 5 - Value of c is %d\n", c );
   //Implementation of Increment Operator
   c = a++; 
   printf("Line 6 - Value of c is %d\n", c );
   //Implementation of Decrement Operator
   c = a--; 
   printf("Line 7 - Value of c is %d\n", c );
}