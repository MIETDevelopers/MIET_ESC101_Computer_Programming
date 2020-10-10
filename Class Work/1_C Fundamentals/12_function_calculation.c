// Title of program
/*Write a program which read three numbers u,a and t and 
then calculate function s where s= u*t + 1/2 * a* t*t */
// Header Files
#include<stdio.h>
// Function Heading
int main() {
	// variable Declaration
	float s, u, a, t;
	// Output Statement (prompt)
	printf("Enter the value of u, a and t:\n");
	//Input Statement
	scanf("%f%f%f", &u, &a, &t);	
	//Assignment statement
	s= (u*t)+(0.5*a*t*t);
	// Output Statement
	printf("\n The value of s is %f", s);
	return 0;	
}