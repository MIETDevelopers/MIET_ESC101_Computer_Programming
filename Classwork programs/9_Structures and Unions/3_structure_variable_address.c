//C program to print the structure variable address
//How to print the memory address of a variable in C programming language 
#include <stdio.h>
//Defining a structure
struct abc {
   //Declare variables 
	int a;
	float b;
	char c;
};
int main() {
	//Creating and Using structure variables in C
	struct abc data; 
	/*To get the address of any variable, we can use “address of operator” (&) operator, 
	it returns the address of the variable*/
	//To print the address of a variable, we use "%p" specifier in C programming language. 
	//Accessing structure members is done by “dot” (.) operator
	printf( "Address of a variable: %p\n", &data.a); 
	printf( "Address of b variable: %p\n", &data.b);
	printf( "Address of c variable: %p\n", &data.c);
	return 0;
}