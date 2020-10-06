// Title of the program
// Program to swap two integer numbers using a temporary variable
// Header Files
#include<stdio.h>
// Function Heading
int main() {
	// Variable Declaration
	int x, y, temp;
	// Output Statement (Prompt)
	printf("\nEnter the value of x");
	// Input Statement
	scanf("%d", &x);
	// Output Statement (Prompt)
	printf("\nEnter the value of y");
	// Input Statement
	scanf("%d", &y);
	//To Print the values of x and y before swapping ie. actual user input values
	printf("\nBefore swapping x= %d, y= %d\n", x, y);
	//To swap the values of x and y, temp variable is used 
	temp= x;
	x = y;
	y = temp;
	//To Print the values of x and y after swapping ie. interchanged values
	printf("\nAfter swapping x= %d, y= %d\n", x, y);
	return 0;
}