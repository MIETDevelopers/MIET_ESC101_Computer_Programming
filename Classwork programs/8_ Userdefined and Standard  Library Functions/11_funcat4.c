// Function 4th Category
// Function with arguments and Return value Example
#include<stdio.h>
// Function Declaration
int Multiplication(int, int);        
// Start of Main Function
int main() {
  int a, b, Multi;
  printf("\n Please Enter two integer values \n");
  scanf("%d %d",&a, &b);
  //Calling the function with dynamic values
  Multi = Multiplication(a, b);
  printf("\n Multiplication of %d and %d is = %d \n", a, b, Multi);        
  return 0;            
}
//Function Definition
int Multiplication(int a, int b) {
  int Multi;  
  Multi = a * b;
  return Multi;
}