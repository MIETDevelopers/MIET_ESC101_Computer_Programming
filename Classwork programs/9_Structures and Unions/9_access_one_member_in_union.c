//C Program to demonstrate only one union member can be accessed at a time. 
//You can only access a single member of a union at one time.
#include <stdio.h>
//Defining a union
union Job {
	// Declare variables
   float salary;
   int workerNo;
} j; // Creating union variable while defining union

int main() {
   //Accessing union members is done by “dot” (.) operator
   j.salary = 12.3;
   j.workerNo = 100;
   printf("Salary = %.1f\n", j.salary);
   printf("Number of workers = %d", j.workerNo);
   return 0;
}