// Title of the program
// Program to swap two numbers using only multiplication and division
// Header Files
#include<stdio.h>
// Function Heading
int main() {
	// Variable Declaration
	int a,b;
	// Output Statement (Prompt)
	printf("\nEnter the value of a");
	// Input Statement
	scanf("%d", &a);
	// Output Statement (Prompt)
	printf("\nEnter the value of b");
	// Input Statement
	scanf("%d", &b);
	//To Print the values of a and b before swapping ie. actual user input values
	printf("\nBefore swapping a= %d, b= %d\n", a, b);
	//swap the values of a and b using only multiplication and division
	a = a * b;
	b = a / b;
	a = a / b;
	//To Print the values of a and b after swapping ie. interchanged values
	printf("\nAfter swapping a= %d, b= %d\n", a, b);
	return 0;
}