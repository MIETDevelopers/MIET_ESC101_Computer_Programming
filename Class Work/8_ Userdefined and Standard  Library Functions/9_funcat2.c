// Function 2nd Category
// Function with No arguments and with Return value Example
// Header Files
#include<stdio.h>
// Function Declaration
int Multiplication();        
// Start of Main Function
int main() {
  int Multi;
  //Function Call
  Multi = Multiplication();
  printf("\n Multiplication of a and b is = %d \n", Multi );        
  return 0;            
}
//Function Definition
int Multiplication() {
  int Multi, a = 20, b = 40;  
  Multi = a * b;
  return Multi;
}