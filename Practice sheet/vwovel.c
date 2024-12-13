#include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Convert to lowercase for easier comparison
    // ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch; // Convert uppercase to lowercase

    // Check if the character is a vowel
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;  // Exit the switch statement after finding a vowel
        default:
            // If it's not a vowel, it's a consonant
            if ((ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' )) {
                printf("%c is a consonant.\n", ch);
            } else {
                printf("Invalid input. Please enter an alphabetic character.\n");
            }
            break;  // Exit the switch statement after checking for consonant or invalid input
    }

    return 0;
}
