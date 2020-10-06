//Program to understand all the relational operators available in C
#include <stdio.h>
void main() {
   int a = 21;
   int b = 10;
   int c ;
   //Implementation of Is equal to and Is not equal to Operator
   if( a == b ) {
      printf("Line 1 - a is equal to b\n" );
   }  
   else {
      printf("Line 1 - a is not equal to b\n" );
   }
	//Implementation of Less than Operator
   if ( a < b ) {
      printf("Line 2 - a is less than b\n" );
   }  
   else {
      printf("Line 2 - a is not less than b\n" );
   }
	//Implementation of Greater than Operator
   if ( a > b ) {
      printf("Line 3 - a is greater than b\n" );
   } 
   else {
      printf("Line 3 - a is not greater than b\n" );
   }
   a = 5;    /* Lets change value of a and b */
   b = 20;
   //Implementation of Less than or equal to Operator
   if ( a <= b ) {
      printf("Line 4 - a is either less than or equal to  b\n" );
   }
	//Implementation of Greater than or equal to Operator
   if ( b >= a ) {
      printf("Line 5 - b is either greater than  or equal to b\n" );
   }
}