//In union, all members share the same memory location.
/*In this C program, both x and y share the same location. 
If we change x, we can see the changes being reflected in y*/

#include <stdio.h>  
// Declaration of union  
union test {
    // Declare variables 
    int x, y; 
};   
int main() {
	//Creating and Using union variables in C
    // A union variable t 
    union test t; 
    //Accessing union members is done by “dot” (.) operator
    t.x = 2; // t.y also gets value 2 
    printf("After making x = 2:\n x = %d, y = %d\n\n", t.x, t.y); 
    t.y = 10; // t.x is also updated to 10 
    printf("After making y = 10:\n x = %d, y = %d\n\n", t.x, t.y); 
    return 0; 
} 