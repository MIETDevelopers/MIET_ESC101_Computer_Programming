// C Program to print grade of a student using Else- If Ladder Statement
// Header Files
#include<stdio.h> 
// Main Function
int main() {
    // Variable Declaration
    int marks;
     //Output Statement (prompt)
    printf("Enter your marks between 0-100\n");
    //Input Statement
    scanf("%d", &marks);
    /* Using else if ladder statement to print
       Grade of a Student */
    if(marks >= 90){
        //Marks between 90-100 
        printf("YOUR GRADE : A\n");
    } else if (marks >= 70 && marks < 90){
        //Marks between 70-89 
        printf("YOUR GRADE : B\n");
    } else if (marks >= 50 && marks < 70){
        //Marks between 50-69 
        printf("YOUR GRADE : C\n");
    } else {
        //Marks less than 50 
        printf("YOUR GRADE : Failed\n");
    }
    return(0);
}