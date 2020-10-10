// Title of the program
// Program to calculate the Area of a triangle using Heron's Formula
// Header Files
#include<stdio.h>
#include<math.h>
// Function Heading
int main() {
	// Variable Declaration
	float a,b,c, s, area_of_triangle;
	// Output Statement (Prompt)
	printf("\nEnter the first side of triangle: \n");
	// Input Statement
	scanf("%f", &a);
	// Output Statement (Prompt)
	printf("\nEnter the second side of triangle: \n");
	// Input Statement
	scanf("%f", &b);
	// Output Statement (Prompt)
	printf("\nEnter the third side of triangle: \n");
	// Input Statement
	scanf("%f", &c);
	// Assignment Statement
	s=(a+b+c)/2;
	area_of_triangle= sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\nThe area of triangle is= %f", a,b,c,area_of_triangle);
	return 0;
}