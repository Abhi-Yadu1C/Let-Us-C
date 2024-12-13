#include <stdio.h>

int main() {
    int n = 10; // Number of terms in the Fibonacci series
    int a = 0, b = 1, sum;

    // Print the first two Fibonacci numbers
    printf("%d %d ", a, b);
    // Loop to generate the Fibonacci series
    for (int i = 2; i < n; i++) {
        sum = a + b; // Calculate the next Fibonacci number
        printf("%d ", sum); // Print the next number
        a = b; // Update a to the last number
        b = sum; // Update b to the new number
    }

    printf("\n"); // New line after printing the series
    return 0;
}