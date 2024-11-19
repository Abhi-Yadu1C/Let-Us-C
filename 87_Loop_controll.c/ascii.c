#include <stdio.h>

int main() {
    int i = 0; // Initialize the counter

    printf("ASCII values and their characters:\n");

    while (i <= 500) { // ASCII values range from 0 to 127
        printf("ASCII value: %3d, Character: %c\n", i, i);
        i++; // Increment the counter
    }

    return 0;
} 
