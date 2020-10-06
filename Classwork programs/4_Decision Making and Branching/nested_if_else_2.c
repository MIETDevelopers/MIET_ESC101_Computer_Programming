// C Program to demonstrate nested if-else statement
// Header Files
#include <stdio.h>
// Main Function
int main() {
   // Variable Declaration
   int var1, var2;
   printf("Input the value of var1:");
   scanf("%d", &var1);
   printf("Input the value of var2:");
   scanf("%d",&var2);
   if (var1 != var2) {
	  printf("var1 is not equal to var2\n");
	  //Implementation of Nested if else statement
	  if (var1 > var2) {
		 printf("var1 is greater than var2\n");
	  }
	  else {
		 printf("var2 is greater than var1\n");
	  }
   }
   else {
	  printf("var1 is equal to var2\n");
   }
   return 0;
}