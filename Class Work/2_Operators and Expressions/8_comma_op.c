//Program to demonstrate the comma operator available in C
#include<stdio.h>
int main() {
    int a, b, c, sum;
    //Implementation of comma operator
    sum = (a=3, b=4, c=5, a+b+c);
    printf("Sum = %d\n", sum);
    // Signal to operating system everything works fine
    return 0;
}