// Implementation of Dangling Pointer
/*The pointer pointing to local variable becomes 
dangling when local variable is not static*/ 
#include<stdio.h> 
int* fun() { 
    /*x is local variable and goes out of scope
     after an execution of fun() is over*/ 
    int x = 5; 
    return &x; 
}  
// start of main function 
int main() {
    int *p = fun(); 
    p = fun(); 
    // p points to something which is not valid anymore 
    printf("%d", *p); 
    return 0; 
} 