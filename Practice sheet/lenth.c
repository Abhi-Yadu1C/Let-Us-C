#include <stdio.h>

int main() {
    char str[100];  // Declare a string with a maximum size of 100 characters
    int length = 0;

    printf("Enter a string: ");
    // Use scanf to read the input string
    scanf("%c]", str);  // Reads up to 99 characters or until newline

    // Calculate the length of the string manually
    while (str[length] != '\0') {
        length++;  // Increment length for each character in the string
    }

    printf("The length of the string is: %d\n", length);

    return 0;
}
