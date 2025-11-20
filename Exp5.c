/*Name; kartvya bhoir 
Branch: Civil
uIN: 251C034
rRoll no. 25*/
s#include <stdio.h>

long long factRecursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factRecursive(n - 1);
}
long long factIterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial (Iterative) of %d = %lld\n", n, factIterative(n));
        printf("Factorial (Recursive) of %d = %lld\n", n, factRecursive(n));
    }

    return 0;
}
s