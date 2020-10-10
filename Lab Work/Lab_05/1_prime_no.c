//C Program to check if a number is prime or not using while loop
// Header Files
#include<stdio.h>
// Start of main function
int main()
{
	// Varibale Declaration
	int i,num;
	// Output Statement (prompt)
	printf("Enter a Number-\n");
	//Input Statement
	scanf("%d",&num);
	i=2;
	// Logic of Program
	while(i<=num-1)
	{
	if(num%i==0)
	{
	printf("Not a Prime Number!\n");
	break;
	}
	i++;
	}
	if(i==num)
	printf("Prime Number!\n");
	return 0;
}