// Write a program to find the sum of positive numbers in C programming using goto statements
// Header Files
#include<stdio.h>
// Start of main function
int main() {
   // variable Declaration
   int n, sum=0;
   /* In this program two goto statements are used. 
   The first goto statement (goto end and label end) works as a break statement 
   and the second goto statement (goto start and label start) works as a loop*/
   start:
   printf("Enter a number: ");
   scanf("%d",&n);
   // The program should take input repeatedly until the user enters a negative number.
   if(n<0) goto end;
   sum = sum + n;
   goto start;
   end:
   printf("Sum = %d",sum);
   return 0;
}