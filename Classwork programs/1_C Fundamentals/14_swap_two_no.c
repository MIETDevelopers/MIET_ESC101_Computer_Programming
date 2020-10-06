// Title of the program
// Program to swap two integer numbers using a temporary variable
// Header Files
#include<stdio.h>
// Function Heading
int main() {
	// Defining the values of x and y in declaration part ie. x=10 and y=20
	int x=10, y=20, temp;
	//To Print the values of x and y before swapping ie. actual defined values 
	printf("\nBefore swapping x= %d, y= %d\n", x, y);
	//To swap the values of x and y, temp variable is used
	temp= x;
	x = y;
	y = temp;
	//To Print the values of x and y after swapping ie. interchanged values
	printf("\nAfter swapping x= %d, y= %d\n", x, y);
	return 0;
}