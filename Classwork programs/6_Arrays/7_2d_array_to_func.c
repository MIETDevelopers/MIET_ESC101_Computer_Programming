// Passing Two-dimensional array to a function 
#include <stdio.h>
// Function Declaration/Function Prototype 
void displayNumbers(int num[2][2]);
// Start of main function
int main() {
    //Array Declaration
    // 2 Rows and 2 Columns are declared in array named as num
    int num[2][2];
    printf("Enter 4 numbers:\n");
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            scanf("%d", &num[i][j]);
    // Passing two-dimensional array to a function
    displayNumbers(num); // function call 
    return 0;
}
// Function Definition
void displayNumbers(int num[2][2]) {
    printf("Displaying:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
           printf("%d\n", num[i][j]);
        }
    }
}