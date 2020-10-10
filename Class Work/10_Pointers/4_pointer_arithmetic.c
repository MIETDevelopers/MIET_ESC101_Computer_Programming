// C program to implement Pointer Arithmetic Concept
#include<stdio.h>
void main() {
	// Array Declaration
	int arr[5]= {8,3,4,9,7};
	// Declaring Integer Pointer
	int* ptr=arr;
	/*Expresions including modify operators (++, --), 
	arithmetic operators (+,-) and pointer operator (*)*/
	/*Evaluate these expressions using precedence order 
	Parenthesis--->Modify Operators--> Pointer Operator---> Arithmetic Operators*/
	printf("%u \n", *(--ptr+2)+3);
	printf("%u \n", *(++ptr+2)-4);
	printf("%u \n", *(ptr--+1)+2);
}	