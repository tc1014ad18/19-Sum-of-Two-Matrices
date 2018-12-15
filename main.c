#include <stdio.h>

int main() {
    int n;
    printf("Hullo, Mate!\nLemme help you add two marices.  You'll find I'm proficient adding square matrices.\n");
    printf("Remember: Square Matrices.  How many elements per side? ");
    scanf("%d", &n);

    if (n <= 1 || n > 10) {
        printf("I can only work with matrices with 2 to 10 elements per side, mate!\n");
        printf("See you around.\n");
        return 0;
    }

    int matrixA[n][n];
    int matrixB[n][n];
    int matrixC[n][n];

    printf("Let's read those matrices.\n");
    for(int m = 1; m <= 2; m++){
        printf("I'm gonna ask your for elements of matrix #%d (row, column)\n", m);

        for(int row = 0; row < n; row++) {
            for(int col = 0; col < n; col++) {
                printf("Give me element[%d][%d]", row, col);
                if (m == 1) {
                    scanf("%d", &matrixA[row][col]);
                } else {
                    scanf("%d", &matrixB[row][col]);
                }
            }
        }
    }

    printf("Now let's see what we get when we add those two matices:\n");
    for(int row = 0; row < n; row++) {
        for(int col = 0; col < n; col++) {
            matrixC[row][col] = matrixA[row][col] + matrixB[row][col];
            printf("%d ", matrixC[row][col]);
        }
        printf("\n");
    }

    printf("\nSee you around, mate!\n");
    return 0;
}