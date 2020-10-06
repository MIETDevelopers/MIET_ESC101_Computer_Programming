// Function Ist Category
//Function with No argument and No Return value Example
// Header Files
#include<stdio.h>
// Function Declaration
void Addition(); 
// Start of Main Function       
void main()
{
  printf("\n ............. \n");
  //Function Call
  Addition();                      
}
//Function Definition
void Addition()
{
  int Sum, a = 10, b = 20;  
  Sum = a + b;
  printf("\n Sum of a = %d and b = %d is = %d", a, b, Sum);
}