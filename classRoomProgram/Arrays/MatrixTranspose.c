//Mareix Transpose

#include <stdio.h>

int main() {
    int a[10][10], T[10][10], r, c;
    
    // Input the number of rows and columns
    printf("Enter the number of rows and columns (max 10): ");
    scanf("%d %d", &r, &c);

    // Input the original matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Transpose the matrix
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            T[j][i] = a[i][j]; // Switch rows and columns
        }
    }

    // Print the transposed matrix
    printf("Transposed matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}