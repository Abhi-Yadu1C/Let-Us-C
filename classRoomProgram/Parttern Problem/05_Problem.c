#include <stdio.h>

int main(){
    int i, j, n; // Number of rows for the pyramid
    printf("Enter The number n=");
    scanf("%d",&n);
    for(i = 1; i <= n; i++){
        // Print leading spaces
        for(j = 1; j <= n - i; j++){
            printf(" "); // Print space
        }
        // Print stars
        for(j = 1; j <= (2 * i - 1); j++){
            printf("%d", j); // Print star
        }
        printf("\n"); // Move to the next line
    }
    return 0;
}