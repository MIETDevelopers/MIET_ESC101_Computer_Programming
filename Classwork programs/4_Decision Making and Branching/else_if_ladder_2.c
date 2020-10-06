/* C program that takes a number between 1 to 9 as input, 
 * Program prints input number in words as output*/
#include<stdio.h>
int  main() {
     int num;
     printf("Enter a number between 1 to 9\n");
     scanf("%d", &num);
     if(num==1) {
           printf("One");
      }
     else if(num==2) {
           printf("Two");
      }
     else if(num==3) {
           printf("Three");
      }
     else if(num==4) {
           printf("Four");
      }
     else if(num==5) {
           printf("Five");
      }
     else if(num==6) {
           printf("Six");
      }
     else if(num==7) {
           printf("Seven");
      }
     else if(num==8) {
           printf("Eight");
      }
     else if(num==9) {
           printf("Nine");
      }
     else {
        printf("You have entered invalid number");
      }
     return 0;
}