//Program to Test whether given number is even or odd if it is below 100 using nested if-else statement
// Header Files
#include<stdio.h>
// Main Function
int main() {
  // This variable is used to store the input number 
   int number ;
   //Output Statement (prompt)
   printf("Enter any integer number: ") ;
   //Input Statement
   scanf("%d", &number) ;
   //Logic of program
   if ( number < 100 ) {
      printf("Given number is below 100\n") ;
      // Modulus (%) returns remainder
      // True if num is perfectly divisible by 2
      if( number%2 == 0) {
          printf("And it is EVEN Number") ;
      }
      else {
          printf("And it is ODD Number") ;
      }
    }
    else {
       printf("Given number is not below 100");
    }
}
