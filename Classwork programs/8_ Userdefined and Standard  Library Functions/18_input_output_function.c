/*Simple C Program that illustrates the use of 
<stdio.h> to use scanf() and printf() functions*/
#include<stdio.h> // Use of stdio.h header
int main()
{
char name[30];
char line[30];
printf("Enter the name: "); // Use of printf() function
scanf("%s", name); // Use of scanf() function
printf("The name is: %s\n", name);
return 0;
}