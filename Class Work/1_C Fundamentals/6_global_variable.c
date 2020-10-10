// C Program to Implement Global Variable Declaration
// Header Files
#include <stdio.h>
//Global variable declaration
int g;
// Start of main function 
int main () {
  //Local variable declaration
  int a, b;
  //Actual initialization
  a = 10;
  b = 20;
  g = a + b;
  printf ("value of a = %d, b = %d and g = %d\n", a, b, g);
  return 0;
}