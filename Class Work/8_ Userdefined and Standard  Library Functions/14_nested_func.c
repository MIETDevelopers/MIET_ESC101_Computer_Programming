// Find cube value using the nested function
// Header Files
#include <stdio.h>
int cube(int a) //cube function
{
    return a*a*a;
}
void display()//Function to display
{
    int i;
    for(i=1; i<=10; i++){
        printf("cube value of %d is  %d\n",i,cube(i));
    }//cube function called inside the display function
}
// Main Function
int main()
{
    display();
    return 0;
}