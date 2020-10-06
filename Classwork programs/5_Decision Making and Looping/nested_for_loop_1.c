//  C Program to Implement Nesting of for loops
// C program to print multiplication table from 12 to 14
// Header Files
#include <stdio.h>
// Start of main function
int main() {
    // variable Declaration
    int i;
    int j;
    // Implement Nesting of for loops
    //Outer loop
    for(i = 12;i<=14;i++) {
        printf("Table of %d\n",i);
        //Inner loop
        for(j = 1;j<=10;j++) {
            printf("%d*%d\t=\t%d\n",i,j,i*j);
        }
    }
    return 0;
}