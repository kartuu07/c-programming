// Name: Kartvya Bhoir //
// UIN: 251C034 //
// Branch: Civil //
// Div: B//
#include <stdio.h>

int main() {
int physics_mark;
printf("\n\nPhysics marks: ");
scanf("%d", &physics_mark);
int chemistry_mark;
printf("Chemistry marks: ");
scanf("%d",&chemistry_mark);
int maths_mark;
printf("Maths marks: ");
scanf("%d",&maths_mark);
float average = (physics_mark+chemistry_mark +maths_mark)/3.0;
printf("\nAverage marks: %f", average);
if (50<=average && 100>=average) {
printf("\nYou are eligible");
} else if (average>100) {
printf("\nError٢٢٢٢٢٢٢");
} else
printf("\nYou are not eligible");
return 0;
}
