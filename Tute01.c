/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   
   int mark1,mark2;
   double average;
   
   printf("Enter the first subject mark : ");
   scanf("%lf",&mark1);
    
   printf("Enter the second subject mark : ");
   scanf("%lf",&mark2);
    
    average = (mark1 + mark2)/2;
    
    printf("Average is : %.2lf",average);
  
  return 0;
}

