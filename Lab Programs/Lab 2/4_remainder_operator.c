// Title of program
//Write a program using remainder operator
// Header Files
#include<stdio.h>
// Function Heading
void main() {
	// variable Declaration
	int var1, var2, remainder;
	// Output Statement (prompt)
	printf("Enter dividend and divisor\n");
	//Input Statement
	scanf("%d%d", &var1, &var2);	
	//Assignment statement
	remainder= var1%var2;
	// Output Statement
	printf("%d/%d remainder=%d", var1, var2, remainder);
}