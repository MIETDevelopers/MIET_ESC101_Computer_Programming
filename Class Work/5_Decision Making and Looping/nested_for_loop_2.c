// C program that uses nested for loop to print a 2D matrix of 3×3. 
// Header Files  
#include <stdio.h> 
// Defining Symbolic Constants  
#define ROW 3 
#define COL 3 
// Start of main function 
int main() { 
    int i, j; 
    // Declare the matrix 
    int matrix[ROW][COL] = { { 1, 2, 3 }, 
                             { 4, 5, 6 }, 
                             { 7, 8, 9 } }; 
    printf("Given matrix is \n"); 
    // Print the matrix using nested loops 
    for (i = 0; i < ROW; i++) { 
        for (j = 0; j < COL; j++) 
            printf("%d ", matrix[i][j]); 
        printf("\n"); 
    } 
    return 0; 
} 