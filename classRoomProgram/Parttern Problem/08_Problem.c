/*

1 
2 1
3 2 1
4 3 2 1
5 4 3 2 1

*/

#include <stdio.h>

int main() {
    int i, j;
    for(i = 1; i <= 5; i++) { // Loop for the number of lines
        for(j = i; j >= 1; j--) { // Loop to print numbers from i down to 1
            printf("%d ", j);
        }
        printf("\n"); // New line after each row
    }

    return 0;
}