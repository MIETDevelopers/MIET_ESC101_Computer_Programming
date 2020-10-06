//Solution to Dangling Pointer Problem
//The dangling problem doesn’t appear (or p doesn’t become dangling) if x is a static variable
//The pointer pointing to local variable doesn't become dangling when local variable is static 
#include<stdio.h> 
int* fun() {
    // x now has scope throughout the program 
    static int x = 5; 
    return &x; 
}  
int main() {
    int *p = fun(); 
  	p = fun();       
    // Not a dangling pointer as it points to static variable. 
    printf("%d",*p); 
} 