// Name: Kartvya Bhoir //
// Branch: Civil //
// Div: B //
// UIN: 251C034 //
#include <stdio.h>

 int main () {
 int start, end;
 int sum = 0; 

  printf("Enter the starting number: ");
  scanf("%d", &start);
  printf("Enter the ending number: ");
  scanf("%d", &end);
  printf("Odd numbers between %d and %d are:", start, end);

  for (int i=start; i<=end; i++) {

   if (i % 2 != 0) {
   printf("\n%d", i);
   sum += i;
   }
  }

  printf("\nSum of odd numbers: %d\n", sum);
   return 0;
  }
