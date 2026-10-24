#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    
    printf("Enter no. of rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    
    printf("Enter no. of rows and colums for second matrix: ");
    scanf("%d %2d", &r2, &c2);

    if (c1 != r2) {
        printf("Multiplication not possible\n");
        return 0;
    }

    int A[r1][c1], B[r2][c2], C[r1][c2];

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
        {
        printf("\nEnter elements for first matirx: ");    
        scanf("%d", &A[i][j]);
        }
        
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
        {
        printf("\nEnter elements for second matrix: ");    
        scanf("%d", &B[i][j]);
        }


    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++)
                C[i][j] += A[i][k] * B[k][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}