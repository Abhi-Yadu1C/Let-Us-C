
#include <stdio.h>

int main()
{
    int A[3][3], B[3][3], i, j, k, c[3][3];

    // Input for Matrix A
    printf("Enter The Matrix A:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Input for Matrix B
    printf("Enter The Matrix B:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix multiplication
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = 0; // Initialize the element
            for (k = 0; k < 3; k++)
            {
                c[i][j] += A[i][k] * B[k][j]; // Perform multiplication and addition
            }
        }
    }

    // Output the resultant Matrix C
    printf("The Matrix C is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}