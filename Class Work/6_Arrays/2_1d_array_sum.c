//Program to print the sum of elements of an array
// Header Files
#include<stdio.h>
// Start of main function
int main()
{
    // variable and array Declaration
    int arr[5], i, sum= 0;
    /*for loop to take input elements from 
    the user and store it in an array element*/
    for(i = 0; i < 5; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    //for loop to print the sum of elements of an array.
    for(i = 0; i < 5; i++)
    {
        sum = sum+arr[i];
    }
 
    printf("\nSum of elements = %d ", sum);
    // signal to operating system program ran fine
    return 0;
}