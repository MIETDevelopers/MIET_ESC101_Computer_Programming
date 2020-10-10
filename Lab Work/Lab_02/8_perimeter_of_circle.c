// Title of program
//Write a program to calculate the perimeter of circle
// Header Files
#include<stdio.h>
// Defining symbolic constant ie. value of PI is defined here
#define PI 3.14159
// Start of main function
int main() {
	// variable Declaration
	float radius, perimeter;
	// Output Statement (prompt)
	printf("Enter the radius of circle\n");
	//Input Statement
	scanf("%f", &radius);	
	// Assignment Statement (Logic Calculation)
	perimeter= 2*PI*radius;
	// Output Statement
	printf("Perimeter of circle of radius (%f cm)= %fcm", radius, perimeter);
	return 0;
}