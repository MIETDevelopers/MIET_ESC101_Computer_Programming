//Program to understand all the assignment operators available in C
#include <stdio.h>
void main() {
   int a = 21;
   int c ;
   //Implementation of = Operator
   c =  a;
   printf("Line 1 - =  Operator Example, Value of c = %d\n", c );
   //Implementation of += Operator
   c +=  a;
   printf("Line 2 - += Operator Example, Value of c = %d\n", c );
   //Implementation of -= Operator
   c -=  a;
   printf("Line 3 - -= Operator Example, Value of c = %d\n", c );
   //Implementation of *= Operator
   c *=  a;
   printf("Line 4 - *= Operator Example, Value of c = %d\n", c );
   //Implementation of /= Operator
   c /=  a;
   printf("Line 5 - /= Operator Example, Value of c = %d\n", c );
   //Implementation of %= Operator
   c  = 200;
   c %=  a;
   printf("Line 6 - %= Operator Example, Value of c = %d\n", c );
   //Implementation of <<= Operator
   c <<=  2;
   printf("Line 7 - <<= Operator Example, Value of c = %d\n", c );
   //Implementation of >>= Operator
   c >>=  2;
   printf("Line 8 - >>= Operator Example, Value of c = %d\n", c );
   //Implementation of &= Operator
   c &=  2;
   printf("Line 9 - &= Operator Example, Value of c = %d\n", c );
   //Implementation of ^= Operator
   c ^=  2;
   printf("Line 10 - ^= Operator Example, Value of c = %d\n", c );
   //Implementation of != rOperator
   c |=  2;
   printf("Line 11 - |= Operator Example, Value of c = %d\n", c );
}