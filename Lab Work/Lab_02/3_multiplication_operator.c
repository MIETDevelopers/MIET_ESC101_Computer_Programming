// Title of program
//Write a program using multiplication operator
// Header Files
#include<stdio.h>
// Function Heading
void main() {
	// variable Declaration
	int var1, var2, product;
	// Output Statement (prompt)
	printf("Enter two numbers for multiplication\n");
	//Input Statement
	scanf("%d%d", &var1, &var2);	
	//Assignment statement
	product= var1*var2;
	// Output Statement
	printf("%d*%d=%d", var1, var2, product);
}