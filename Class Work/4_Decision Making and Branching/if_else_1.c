// C program to find largest of two numbers 
#include <stdio.h> 
int main() {
    int num1, num2, largest; 
    //Input two numbers
    printf("Enter two numbers:\n"); 
    scanf("%d%d", &num1, &num2); 
    //Check if a is greater than b
    if (num1 > num2) 
        largest = num1; 
    else
        largest = num2; 
    //Print the largest number
    printf("%d", largest); 
    return 0; 
} 