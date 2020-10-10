// Title of the program
// Header Files
#include<stdio.h>
// Function Heading
int main() {
	// Variable Declaration
	float simpleinterest, principle_amount, rate_of_interest, time_period;
	// Output Statement (Prompt)
	printf("\nEnter the principle amount: \n");
	// Input Statement
	scanf("%f", &principle_amount);
	// Output Statement (Prompt)
	printf("\nEnter the rate of interest: \n");
	// Input Statement
	scanf("%f", &rate_of_interest);
	// Output Statement (Prompt)
	printf("\nEnter the time period in years: \n");
	// Input Statement
	scanf("%f", &time_period);
	// Assignment Statement
	simpleinterest= (principle_amount*rate_of_interest*time_period) /100;	
	// Output Statement
	printf("\nSimple Interest for Principal Amount %.2f is= %.2f", principle_amount, simpleinterest);
	return 0;
}