/*C program to check whether a number is positive, negative 
or zero using simple if statement*/
// Header Files
#include <stdio.h>
// Function Heading
int main() {
    // Variable Declaration
    int num;
    // Output Statement (Prompt)
    printf("Enter any number: ");
    // Input Statement
    scanf("%d", &num);
    // Logic of the program
    if(num > 0) {
        printf("Number is POSITIVE");
    }
    if(num < 0) {
        printf("Number is NEGATIVE");
    }
    if(num == 0) {
        printf("Number is ZERO");
    }
    return 0;
}