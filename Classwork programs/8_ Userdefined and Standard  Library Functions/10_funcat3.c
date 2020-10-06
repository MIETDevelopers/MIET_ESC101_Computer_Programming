// Function 3rd Category
// Function with argument and No Return value Example
// Header Files
#include<stdio.h>
// Function Declaration
void Addition(int, int);        
// Start of Main Function
void main() {
  int a, b;
  printf("\n Please Enter two integer values \n");
  scanf("%d %d",&a, &b);
  //Calling the function with dynamic values
  Addition(a, b);
}
//Function Definition
void Addition(int a, int b) {
  int Sum;  
  Sum = a + b;
  printf("\n Additiontion of %d and %d is = %d \n", a, b, Sum);
}