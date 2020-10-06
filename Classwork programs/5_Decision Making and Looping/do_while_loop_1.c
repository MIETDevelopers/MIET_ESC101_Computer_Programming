// C Program to print the sum of all even and odd numbers using do-while loop
// Header Files
#include<stdio.h>
// Main Function
int main()
{
      // Variable Declaration
      int n, s1=0, s2=0;
      printf("/*It will take numbers until\nyou enter a Zero*/\n\n");
      do {
            //Body of Loop
            printf("Enter Number : ");
            scanf("%d",&n);
            // If condition to check whether the entered numbers are even or odd
            if(n%2==0)
                  s1=s1+n;
            else
                  s2=s2+n;
      }
      // While Condition
      while(n!=0);
      // Output Statement
      printf("\nSum of Even Numbers :  %d\n",s1);
      printf("\nSum of Odd Numbers  :  %d\n",s2);
      return 0;
}