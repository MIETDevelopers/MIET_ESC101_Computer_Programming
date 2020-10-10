// Title of the program
// Program to swap two floating point numbers using a temporary variable
// Header Files
#include<stdio.h>
// Function Heading
int main() {
	// Variable Declaration
	float x, y, temp;
	// Output Statement (Prompt)
	printf("\nEnter the value of x");
	// Input Statement
	scanf("%f", &x);
	// Output Statement (Prompt)
	printf("\nEnter the value of y");
	// Input Statement
	scanf("%f", &y);
	//To Print the values of x and y before swapping ie. actual user input values upto default 6 decimal places
	printf("\nBefore swapping x= %f, y= %f\n", x, y);
	//To swap the values of x and y, temp variable is used
	temp= x;
	x = y;
	y = temp;
	//To Print the values of x and y after swapping ie. interchanged values upto default 6 decimal places
	printf("\nAfter swapping x= %f, y= %f\n", x, y);
	return 0;
}