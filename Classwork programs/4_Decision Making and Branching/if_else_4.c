//C program to check divisibility of any number
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
    /* If  num modulo division 5 is 0 
       and num modulo division 11 is 0 then
       the number is divisible by 5 and 11 both*/
    if((num % 5 == 0) && (num % 11 == 0)) {
        printf("Number is divisible by 5 and 11");
    }
    else {
        printf("Number is not divisible by 5 and 11");
    }
    return 0;
}