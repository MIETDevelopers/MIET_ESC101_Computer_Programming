// C program to Implement Pointer to Structure
#include<stdio.h>
//Defining a structure
struct student {
	// Declare variables 
	char name[20];
	int roll;
};
// Start of main function
int main() {
	//Declaring Structure variable stu
	struct student stu; // Normal Structure Variable
	struct student *p; // Pointer Variable
	p= &stu;     // Address of structure variable is assigned to pointer variable
	// To Store Information using Structure
	printf("\n\tEnter Student Name:");
	//Accessing Structure Members using -> the indirect membership operator
	scanf("%s", p-> name);  
	printf("\n\tEnter Student Roll No:");
	scanf("%d", &p-> roll);
	// To display Information using Structure
	printf("\n\t\t ********OUTPUT*******");
	printf("\n\tStudent name: %s", (*p).name);
	printf("\n\tStudent Roll No: %d", (*p).roll);
	return 0;
}