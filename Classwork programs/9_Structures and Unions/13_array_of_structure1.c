// C Program to Implement Array of Structure
#include<stdio.h>
//Defining a structure
struct studentmarks {
	char name[50];
	char roll[20];
	int computer;
	int math;
	int physics;
	int graphics;
	int total;
};
// Start of Main function
int main() {
	int x,i;
	struct studentmarks no[100];
	printf("Enter the number of students\n");
	scanf("%d", &x);
	// To Store Information
	for(i=0; i<x; i++) {
		printf("\nName of student:\t");
		//name is a member of Student
		scanf("%s", no[i].name); //Accessing Structure Members
		printf("\nRollnumber:\t\t");
		scanf("%s", no[i].roll);
		printf("\nMarks in Computer:\t");
		scanf("%d", &no[i].computer);
		printf("\nMarks in Math:\t\t");
		scanf("%d", &no[i].math);
		printf("\nMarks in Physics:\t");
		scanf("%d", &no[i].physics);
		printf("\nMarks in Graphics:\t");
		scanf("%d", &no[i].graphics);
		no[i].total= no[i].computer + no[i].math + no[i].physics + no[i].graphics;
	}

	// To Display Student Marks
	for(i=0; i<x; i++) {
		printf("\nMarks Scored by %s:%d", no[i].name, no[i].total);
		printf("\nMarks out of:400");
	}
	return 0;
}