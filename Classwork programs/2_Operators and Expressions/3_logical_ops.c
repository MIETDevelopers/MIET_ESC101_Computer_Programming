//Program to understand all the logical operators available in C
#include <stdio.h>
void main() {
   int a = 5;
   int b = 20;
   int c ;
   //Implementation of  Logical AND Operator
   if ( a && b ) {
      printf("Line 1 - Condition is true\n" );
   }
	 //Implementation of  Logical OR Operator
   if ( a || b ) {
      printf("Line 2 - Condition is true\n" );
   }
   /* lets change the value of  a and b */
   a = 0;
   b = 10;
	//Implementation of  Logical AND Operator
   if ( a && b ) {
      printf("Line 3 - Condition is true\n" );
   } 
   else {
      printf("Line 3 - Condition is not true\n" );
   }
	//Implementation of Logical NOT Operator
   if ( !(a && b) ) {
      printf("Line 4 - Condition is true\n" );
   }	
}