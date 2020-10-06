// C program to Implement Null Pointer
/*NULL Pointer is a pointer which is pointing to nothing. 
In case, if we don’t have address to be assigned to a pointer, 
then we can simply use NULL*/
#include <stdio.h> 
int main() {
    // Null Pointer 
    int *ptr = NULL; 
    /*Functions belonging to the printf function family have the type specifiers "%p" and 
    "%x". "x" and "X" serve to output a hexadecimal number. "x" stands for lower case letters (abcdef) 
    while "X" for capital letters (ABCDEF). "p" serves to output a pointer */  
    printf("The value of ptr is %p", ptr); 
    return 0; 
} 