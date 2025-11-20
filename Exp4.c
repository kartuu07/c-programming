/*Name: Kartvya Bhoir
Rollno: 2510034
Branch: Civil
Div: B*/
#include <stdio.h>
int Prime(int num) {
if (num <= 1)
return 0;
for (int i = 2; i * i <= num; i++) {
if (num % i == 0)
return 0;
}
return 1;
}
int range(int start, int end) {
printf("Prime numbers between %d and %d are:\n", start, end);
for (int i = start; i <= end; i++) {
if (Prime(i))
printf("%d", i);
}
}
int main() {
int a;
int b;
printf("Enter two numbers: ");
scanf("%d  %d", &a, &b);
range(a, b);
return 0;
}
