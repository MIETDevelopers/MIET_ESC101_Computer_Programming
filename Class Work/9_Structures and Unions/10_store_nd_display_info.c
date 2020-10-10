//Program to Store Information and Display it using Structure
#include <stdio.h>
//Defining a structure  
struct student {
    int roll;
    float marks;
} s; //Declaring Structure variable s with structure definition

int main() {
    // To Store Information using Structure
    printf("Enter information:\n");
    printf("Enter roll number: ");
    //s is a variable of Student type and roll is a member of Student
    scanf("%d", &s.roll); //Accessing Structure Members
    printf("Enter marks: ");
    //s is a variable of Student type and marks is a member of Student
    scanf("%f", &s.marks); //Accessing Structure Members
    // To display Information using Structure
    //Use of %f in output statement
    printf("Displaying Information:\n");
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %f\n", s.marks);
    return 0;
}