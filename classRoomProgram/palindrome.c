#include <stdio.h>

int main() {
    int n, org, rem, rev = 0; // Initialize rev to 0
    printf("Enter the number n = ");
    scanf("%d", &n);
    
    org = n; // Store the original number
    
    // Reverse the number
    while (n != 0) {
        rem = n % 10; // Get the last digit
        rev = rev * 10 + rem; // Build the reversed number
        n /= 10; // Remove the last digit
    }
    
    // Check if the original number is equal to the reversed number
    if (org == rev) {
        printf("%d is a palindrome number\n", org);
    } else {
        printf("%d is not a palindrome number\n", org);
    }
    
    return 0;
}