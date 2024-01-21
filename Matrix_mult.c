#include <stdio.h>

int main() {
    int A[3][3], B[3][3], C[3][3], i, j, k, sum;

    printf("Please enter 9 numbers of the matrix A:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }

    printf("Please enter 9 numbers of the matrix B:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            sum = 0;
            for (int k = 0; k < 3; k++)
                sum = sum + A[i][k] * B[k][j];

            C[i][j] = sum;  // Move this line outside the innermost loop
        }

    printf("This is Output:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    
}
    return 0;
}
