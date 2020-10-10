//C program to add two numbers without functions
// Header Files
#include<stdio.h>
// Function Heading
void main() {
	// variable Declaration
	int var1, var2, sum;
	// Output Statement (prompt)
	printf("Enter two numbers to be added\n");
	//Input Statement
	scanf("%d%d", &var1, &var2);	
	//Assignment statement
	sum= var1+var2;
	// Output Statement
	printf("%d+%d=%d", var1, var2, sum);
}