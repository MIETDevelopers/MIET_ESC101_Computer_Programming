// C program to implement Pointer Arithmetic Concept
//Pointer Modify Increment : Decrement Operator
#include<stdio.h>
void main() {
	// Declaring Character Pointer
	char* cp;
	// Decalring Short Pointer
	short* sp;
	//Declaring Float Pointer
	float* fp;
	// Pinting the cp, sp and fp value
	printf("cp: %u \n", cp);
	printf("sp: %u \n", sp);
	printf("fp: %u \n", fp);
	//Printig ++cp value, ++sp value and ++fp value after modifying
	/*How many locations it will increase, 
	size of char is 1 byte so it increased by 1 byte only*/
	printf("++cp: %u \n", ++cp);
	/*How many locations it will increase, 
	size of short is 2 byte so it increased by 2 bytes only*/
	printf("++sp: %u \n", ++sp);
	/*How many locations it will increase, 
	size of float is 4 byte so it increased by 4 bytes only*/
	printf("++fp: %u \n", ++fp);
}