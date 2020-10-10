//Program to understand operator precedence and associativity in C
//Evaluation of Expressions
#include <stdio.h>
int main() {
   int a = 20;
   int b = 10;
   int c = 15;
   int d = 5;
   int e;
   //Evaluationg Ist expression
   e = (a + b) * c / d;      // ( 30 * 15 ) / 5
   printf("Value of (a + b) * c / d is : %d\n",  e );
   //Evaluationg 2nd expression
   e = ((a + b) * c) / d;    // (30 * 15 ) / 5
   printf("Value of ((a + b) * c) / d is  : %d\n" ,  e );
   //Evaluationg 3rd expression
   e = (a + b) * (c / d);   // (30) * (15/5)
   printf("Value of (a + b) * (c / d) is  : %d\n",  e );
   //Evaluationg 4th expression
   e = a + (b * c) / d;     //  20 + (150/5)
   printf("Value of a + (b * c) / d is  : %d\n" ,  e );
   return 0;
}