// C Program to Represent Formal and Actual Arguments
// Creating a user defined function Multiplication()
#include<stdio.h>
// Function Declaration
int Multiplication(int, int);        
// Start of Main Function
int main() {
  int a, b, Multi;
  printf("\n Please Enter two integer values \n");
  scanf("%d %d",&a, &b);
  //Function Call
  Multi = Multiplication(a, b); // Actual Arguments
  printf("\n Multiplication of %d and %d is = %d \n", a, b, Multi);        
  return 0;            
}
//Function Definition
int Multiplication(int a, int b)  // Formal arguments
{
  int Multi;  
  Multi = a * b;
  return Multi;
}