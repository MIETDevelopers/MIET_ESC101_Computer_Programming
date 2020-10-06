// C Program to calculate the sum of a maximum of 10 numbers
// If a negative number is entered, the loop terminates
// Header Files
# include <stdio.h>
// Main Function
int main() {
    // Variable Declaration
    int i;
    double number, sum = 0.0;
    // Implemntation of for loop
    for(i=1; i <= 10; ++i) {
        printf("Enter a n%d: ",i);
        scanf("%lf",&number);
        // Implentation of break statement
        // If the user enters a negative number, the loop ends
        if(number < 0.0) {
            break;
        }
        sum += number; // sum = sum + number;
    }
    // Output Statement
    printf("Sum = %.2lf",sum);
    return 0;
}