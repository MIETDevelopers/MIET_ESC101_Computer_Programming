// Write a C program to find the reverse of a number
// Header Files
#include <stdio.h>
// Start of main function
int main() {
    // variable Declaration
    int n, rev = 0, remainder;
    // Output Statement (prompt)
    printf("Enter an integer: ");
    //Input Statement
    scanf("%d", &n);
    // Logic of program
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n= n/10;
    }
    // Output Statement
    printf("Reversed number = %d", rev);
    // signal to operating system program ran fine
    return 0;
}