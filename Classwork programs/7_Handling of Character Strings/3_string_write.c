/*Write a program to store the string "United Kingdom" in the array country 
and display the string under various format specifications*/
//WRITING STRINGS USING %s FORMAT
#include <stdio.h>
int main()
{
//Declaring String Variables
char country[15] = "United Kingdom";
printf("%15s\n", country);
/*When the field width is less than length of the string, 
the entire string is printed*/
printf("%5s\n", country);
/*The integer value on the right side of the decimal point
specifies the number of characters to be printed*/
printf("%15.6s\n", country);
/* When the number of characters to be printed is specified 
as zero, nothing is printed*/
printf("%15.0s\n", country);
/*The minus sign in the specification causes the string 
to be printed left-justified*/
printf("%-15.6s\n", country);
printf("%.3s\n", country);
printf("%s\n", country);
return 0;
}