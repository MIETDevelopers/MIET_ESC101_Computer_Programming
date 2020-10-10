// Title of the program
// Program which reads two numbers and then print greater one
// Header Files
#include<stdio.h>
// Function Heading
int main() {
	// Variable Declaration
	float number1, number2;
	// Output Statement (Prompt)
	printf("\nEnter the first number: \n");
	// Input Statement
	scanf("%f", &number1);
	// Output Statement (Prompt)
	printf("\nEnter the second number: \n");
	// Input Statement
	scanf("%f", &number2);
	// Logic of the program
	if (number1>number2)	
	// Output Statement
	printf("\nGreater number is: %f\n", number1);
	if (number2>number1)	
	// Output Statement
	printf("\nGreater number is: %f\n", number2);
	return 0;
}