/*C program print numbers between 1 and 100 which are 
multiple of 3 using do while loop*/
// Header Files
#include<stdio.h> 
// Start of main function
int main() {
    // declare and initialize i to 1
    int i = 1; 
    //Implementation of do while loop
    do {
        // Check whether i is multiple of 3 not or not
        if(i % 3 == 0) {
            // print the value of i
            printf("%d ", i);   
        }
        // increment i by 1
        i++; 
    } while(i < 100); // stop the loop when i becomes greater than 100
    // signal to operating system everything works fine
    return 0;
}