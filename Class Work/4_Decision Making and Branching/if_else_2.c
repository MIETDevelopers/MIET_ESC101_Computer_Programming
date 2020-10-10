//Program for calculating bonus entitled to the employee using IF- Else statement and Logical AND operator
// Header Files
#include<stdio.h>
// Main Function
int main()
{
   // variable Declaration
   float salary;
   int age;
   //Output Statement (prompt)
   printf("Enter the salary of the employee: ");
   //Input Statement
   scanf("%f",&salary);
    //Output Statement (prompt)
   printf("Enter the age of the employee: ");
   //Input Statement
   scanf("%d",&age);
   // Logic of Program
   if ((salary>5000) && (age>35)) {
      printf("%.2f Bonus for the Employee=", .20*salary);
   }
   else {
      printf("Not eligible for bonus");
   }
   return 0;
}