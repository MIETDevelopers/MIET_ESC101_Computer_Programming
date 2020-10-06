//C Program to find square of a number using functions
// Header Files
#include<stdio.h>
// function prototype, also called function declaration
float square ( float x );                               
// main function, program starts from here
int main( ) {              
    float m, n ;
    printf ( "\nEnter some number for finding square \n");
    scanf ( "%f", &m ) ;
    // function call
    n = square(m) ;                      
    printf("\nSquare of the given number %.2f is %.2f",m,n);
}
// function definition
float square ( float x ) { 
    float p ;
    p = x * x ;
    return ( p ) ;
}