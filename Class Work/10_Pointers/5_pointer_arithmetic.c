// C program to implement Pointer Arithmetic Concept
#include<stdio.h>
void main() {
	// Declaring char pointer
	char* str= "nareshit";
	/*Expresions including modify operators (++, --), 
	arithmetic operators (+,-) and pointer operator (*)*/
	/*Evaluate these expressions using precedence order 
	Parenthesis--->Modify Operators--> Pointer Operator---> Arithmetic Operators*/
	printf("%c \n", *((str--+2)+1)-3);
	printf("%c \n", *(--str+3)-32);
	printf("%c \n", *(++str+2)+4);
}	