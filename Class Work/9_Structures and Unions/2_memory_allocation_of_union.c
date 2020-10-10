//C Program to implement Memory allocation of Union
#include <stdio.h>
//Defining a union 
union Data {
   int i;
   float f;
   char str[20];
};
int main( ) {
	//Creating and Using union variables in C
   union Data abc;        
	//To print Memory allocation of union
   printf( "Memory size occupied by data : %d\n", sizeof(abc));
   return 0;
}