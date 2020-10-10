/*C program to store the information of student marks using Array of
structures and find total marks and average marks of each individual student*/
#include<stdio.h>
//Defining a structure
struct studentmarks {
	char name[50];
	char roll[20];
	float computer;
	float math;
	float physics;
	float graphics;
	float total;
	float averagemarks;
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
		scanf("%f", &no[i].computer);
		printf("\nMarks in Math:\t\t");
		scanf("%f", &no[i].math);
		printf("\nMarks in Physics:\t");
		scanf("%f", &no[i].physics);
		printf("\nMarks in Graphics:\t");
		scanf("%f", &no[i].graphics);
		no[i].total= no[i].computer + no[i].math + no[i].physics + no[i].graphics;
		no[i].averagemarks= no[i].total/4;
	}

	// Displaying Student Marks
	for(i=0; i<x; i++) {
		printf("\nMarks Scored by %s:%.4f", no[i].name, no[i].total);
		printf("\nMarks out of:400");
		printf("\nAverage Marks Scored by %s:%.4f", no[i].name, no[i].averagemarks);
	}
	return 0;
}