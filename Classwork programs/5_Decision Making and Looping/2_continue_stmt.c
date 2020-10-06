// C Program to Implement CONTINUE statement
// Header Files
#include <stdio.h>
// Start of main function
int main() {
    // variable Declaration
    int i, n, a, sq;
    // Program finds square of positive numbers only
    printf("\nProgram finds square of positive numbers only\n");
    printf("\nHow many numbers you want to enter: ");
    scanf("%d", &n);
    // Implentation of continue statement inside for loop
    for (i=1; i<=n; i++) {
        printf("\nEnter Number: ");
        scanf("%d", &a);
        if (a < 0)
            continue;
        sq = a * a;
        printf("\nSquare of a Number : %d\n", sq);
    }
    return 0;
}