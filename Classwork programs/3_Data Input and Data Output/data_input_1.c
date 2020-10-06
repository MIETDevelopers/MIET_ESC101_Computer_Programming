// C program to implement getchar() and putchar() Functions
#include <stdio.h>
int main( ) {
   int c;
   printf( "Enter a value :");
   c = getchar( );  //This function reads only single character at a time.
   printf( "\nYou entered: ");
   putchar( c );   //This function puts only single character at a time.
   return 0;
}