// C program to implement Pointer Arithmetic Concept
#include<stdio.h>
void main() {
	// Array Declaration
	int arr[5]= {10,20,30,40,50};
	// Declaring Integer Pointer
	int* ptr=arr;
	/*Expresions including modify operators (++, --), 
	arithmetic operators (+,-) and pointer operator (*)*/
	/*Evaluate these expressions using precedence order 
	Parenthesis--->Modify Operators--> Pointer Operator---> Arithmetic Operators*/
	printf("%u \n", *++ptr+3);
	printf("%u \n", *(ptr--+2)+5);
	printf("%u \n", *(ptr+3)-10);
}	
