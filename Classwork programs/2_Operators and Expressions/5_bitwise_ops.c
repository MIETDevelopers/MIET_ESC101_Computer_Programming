//Program to understand all the bitwise operators available in C
#include <stdio.h>
void main() {
   int a = 60;	/* 60 = 0011 1100 */  
   int b = 13;	/* 13 = 0000 1101 */
   int c = 0;           
   //Implementation of Bitwise AND Operator
   c = a & b;       /* 12 = 0000 1100 */ 
   printf("Line 1 - Value of c is %d\n", c );
   //Implementation of Bitwise OR Operator
   c = a | b;       /* 61 = 0011 1101 */
   printf("Line 2 - Value of c is %d\n", c );
   //Implementation of Bitwise exclusive OR Operator
   c = a ^ b;       /* 49 = 0011 0001 */
   printf("Line 3 - Value of c is %d\n", c );
   //Implementation of Bitwise complement Operator
   c = ~a;          /*-61 = 1100 0011 */
   printf("Line 4 - Value of c is %d\n", c );
   //Implementation of left shift Operator
   c = a << 2;     /* 240 = 1111 0000 */
   printf("Line 5 - Value of c is %d\n", c );
   //Implementation of right shift Operator
   c = a >> 2;     /* 15 = 0000 1111 */
   printf("Line 6 - Value of c is %d\n", c );
}