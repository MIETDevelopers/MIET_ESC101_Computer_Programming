// Title of program
//Write a program to calculate the area of circle
// Header Files
#include<stdio.h>
// Start of main function
int main() {
	// variable Declaration
	int radius;
	float area;
	// Output Statement (prompt)
	printf("Enter the radius of circle\n");
	//Input Statement
	scanf("%d", &radius);	
	// Assignment Statement (Logic Calculation)
	area= 3.14159*radius*radius;
	// Output Statement
	printf("Area of circle is %f", area);
	return 0;
}