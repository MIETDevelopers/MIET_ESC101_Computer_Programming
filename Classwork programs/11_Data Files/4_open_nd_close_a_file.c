/*Program to open and close a file*/
#include <stdio.h>
int main() {
 FILE *fp;
 //fopen() function is used to open a file named example.txt in read mode
 fp= fopen ("student.txt","r");
 //fclose() is used to close the file
 fclose(fp);
 return 0;
}