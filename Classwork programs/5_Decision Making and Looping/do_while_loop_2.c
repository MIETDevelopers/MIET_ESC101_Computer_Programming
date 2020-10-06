// Program to add numbers until the user enters zero
// Header Files
#include <stdio.h>
// Start of main function
int main() {
    // Variable Declaration
    double number, sum = 0;
    //Implementation of do while loop
    //The body of the loop is executed at least once
    do {
        printf("Enter a number: ");
        scanf("%lf", &number);
        sum += number;
    }
    while(number != 0.0);
    printf("Sum = %.2lf",sum);
    return 0;
}