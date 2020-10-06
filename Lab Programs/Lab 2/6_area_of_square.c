// Title of program
//Write a program to calculate the area of square
// Header Files
#include<stdio.h>
// Start of main function
int main() {
	// variable Declaration
	float side, area;
	// Output Statement (prompt)
	printf("Enter the side of square\n");
	//Input Statement
	scanf("%f", &side);	
	// Assignment Statement (Logic Calculation)
	area= side*side;
	// Output Statement
	printf("Area of this square= %f", area);
	return 0;
}