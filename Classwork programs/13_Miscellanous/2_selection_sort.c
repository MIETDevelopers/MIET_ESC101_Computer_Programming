//Implementing Selection Sort in a C Program
#include<stdio.h>
int main() {
  int i, j, min, n, temp, a[25];
  printf("How many numbers u are going to enter?: ");
  scanf("%d",&n);
  printf("Enter %d elements: ", n);
  // Loop to get the elements stored in array
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  // Logic of selection sort algorithm
  for(i=0;i<n-1;i++){
    min=i;
    for(j=i+1;j<n;j++) {
      if(a[j]<a[min]) {
        min= j;
      }
    }
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
  }
  printf("Sorted elements: ");
  for(i=0;i<n;i++)
    printf(" %d",a[i]);
  return 0;
}