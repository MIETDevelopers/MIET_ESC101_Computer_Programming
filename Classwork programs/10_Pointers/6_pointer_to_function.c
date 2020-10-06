// C program to find sum of two numbers using a pointer to function method
// Implementing Pointer to function concept
#include<stdio.h>
void main() {
	// Function Declaration
	int add (int, int);
	int a, b, s;
	/*Declaring a pointer to function with int return type 
	and takes the two formal arguments of int type*/ 
	int (*ptr) (int,int);
	// Address of the function must be assigned to a pointer
	ptr= &add;
	// Through pointer to function, function is called
	// a and b are actual parameters, s is variable in which the function return value
	// ptr is pointer name which points to function
	a= 30;
	b= 50;
	s= (*ptr) (a,b);
	printf("%d", s);
}
// Function Definition
int add(int x, int y) {
	int z;
	z=x+y;
	return z;
}