//C Program to demonstrate how to access all members of a structure at once.
/*You can access all members of a structure at once 
as sufficient memory is allocated for all members*/
#include <stdio.h>
//Defining a structure
struct Job {
	// declare variables 
   float salary;
   int workerNo;
} j; // Creating structure variable while defining structure
int main() {
   //Accessing structure members is done by “dot” (.) operator
   j.salary = 12.3;
   j.workerNo = 100;
   printf("Salary = %.1f\n", j.salary);
   printf("Number of workers = %d", j.workerNo);
   return 0;
}