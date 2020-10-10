// C Program to Implement Passing Structures to Functions
#include <stdio.h>
//Defining a structure
struct student {
  char name[50];
  int age;
};
//function declaration
void display(struct student s1);
// Start of Main function
int main() {
    struct student s1;
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter age: ");
    scanf("%d", &s1.age);
    //function call
    display(s1);   // passing structure as an argument
    return 0;
}
// Function Definition
void display(struct student s1) {
  printf("\nDisplaying information\n");
  printf("Name: %s", s1.name);
  printf("\nAge: %d", s1.age);
}