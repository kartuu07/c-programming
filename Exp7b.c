/*Name; Kartvya bhoir
Roll no. 25
UIN: 251C034
Branch; Civil*/
#include <stdio.h>

int main() {
    int A[2][2] = {
        {1, 2},
        {3, 4}
    };

    int B[2][2] = {
        {4, 3},
        {2, 1}
    };

    int sum[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
    
    printf("Sum of the two 2x2 matrices:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
