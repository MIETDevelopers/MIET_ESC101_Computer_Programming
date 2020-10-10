// Title of the program
// Program to calculate the compound interest
// Header Files
#include<stdio.h>
#include<math.h>
// Function Heading
int main() {
	// Variable Declaration
	float compoundinterest, principle, rate, time, amount;
	// Output Statement (Prompt)
	printf("\nEnter the principle amount: \n");
	// Input Statement
	scanf("%f", &principle);
	// Output Statement (Prompt)
	printf("\nEnter the rate of interest: \n");
	// Input Statement
	scanf("%f", &rate);
	// Output Statement (Prompt)
	printf("\nEnter the time period in years: \n");
	// Input Statement
	scanf("%f", &time);
	// Assignment Statement
	amount= principle*pow(1+rate/100,time);
	compoundinterest= amount-principle;	
	// Output Statement
	printf("\nAmount = %.2f\n", amount);
	printf("\nCompound Interest = %.2f", compoundinterest);
	return 0;
}