// Simple Example Based on Pointers
#include<stdio.h>
void main() {
	// Inside main function one integer variable i is declared.
	// Initializing the value 100 to i variable so gets memory allocated at some location
	int i=100;
	// Declaring one integer pointer variable
	// ptr is the pointer name
	int *ptr;
	ptr= &i;
	// It will print i value
	printf("%u\n", i);
	// It will print ptr value
	printf("%u\n", ptr);
	// Here we are printing address of i
	printf("%u\n", &i);
	// Here we are printing the address of ptr
	printf("%u\n", &ptr);
	// Here, pointer to ptr we are writing
	printf("%u\n", *ptr);
	// Here pointer to address of i we are writing
	printf("%u\n", *(&i));
}