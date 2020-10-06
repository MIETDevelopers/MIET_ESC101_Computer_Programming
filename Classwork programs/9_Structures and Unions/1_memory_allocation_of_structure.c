//C Program to implement Memory allocation of structure
#include <stdio.h>
//Defining a structure
struct Data {
	//Declare variables
   int i;
   float f;
   char str[20];
};
int main( ) {
	//Creating and Using structure variables in C
   struct Data abc;        
   //To print Memory allocation of structure
   printf( "Memory size occupied by data : %d\n", sizeof(abc));
   return 0;
}