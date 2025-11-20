#include <stdio.h>

int counter() {
    static int count = 0; 
    count++;
    printf("Function called %d times\n", count);
}

int main() {
  
    counter();
    counter();
    counter();
    counter();

    return 0;
}
