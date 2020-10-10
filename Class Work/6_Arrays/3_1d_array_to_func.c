// Passing One-dimensional array to a function  
// C Program to calculate the sum of array elements by passing to a function 
// Header Files
#include <stdio.h>
// Function Declaration/Function Prototype 
float calculateSum(float age[]);
// Start of main function
int main() {
    // variable and array Declaration
    float result, age[] = {23.4, 55, 22.6, 3, 40.5, 18};
    // age array is passed to calculateSum() function
    result = calculateSum(age);  // function call   
    printf("Result = %.2f", result);
    return 0;
}
// Function Definition
float calculateSum(float age[]) {
  float sum = 0.0;
  for (int i = 0; i < 6; ++i) {
		sum += age[i];
  }
  return sum;
}