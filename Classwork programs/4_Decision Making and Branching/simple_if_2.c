// Title of the program
/*Program which calculates sum of two numbers and multiplication 
of two numbers if first no. is greater than second one otherwise 
print sorry using simple if statement*/
// Header Files
#include<stdio.h>
// Function Heading
int main() {
	// Variable Declaration
	int number1, number2, sum, multiplication;
	// Output Statement (Prompt)
	printf("\nEnter the first number: \n");
	// Input Statement
	scanf("%d", &number1);
	// Output Statement (Prompt)
	printf("\nEnter the second number: \n");
	// Input Statement
	scanf("%d", &number2);
	// Logic of the program
	if (number1>number2) {
		sum=number1+number2;
		multiplication=number1*number2;
		// Output Statement
		printf("\nSum of two numbers is: %d\n", sum);
		printf("\nMultiplication of two numbers is: %d\n", multiplication);
	}	
	if (number2>=number1) {
		// Output Statement
		printf("\nSORRY");	
	}	
	return 0;
}