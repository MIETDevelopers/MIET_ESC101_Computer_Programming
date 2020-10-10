/*C program to declare the pointer to pointer variable
and to display the contents of these pointers*/ 
//Implementing Pointer to Pointer Concept
#include<stdio.h>
int main() {
	// p is a pointer and pp is pointer to pointer
	int a=5, *p, **pp;
	p=&a;
	pp=&p;
	printf("Value= %d\n", a);
	printf("Pointer1 = %d\n", *p); // * means value of address
	printf("Pointer2 = %d\n", **pp);
	return 0;
}