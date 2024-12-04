
/*5 
  4 4
  3 3 3
  2 2 2 2
  1 1 1 1 1 */
#include <stdio.h>

int main()
{
    int i, j;

    for(i = 5; i >= 1; i--) { // Start from 5 and go down to 1
        for(j = 1; j <= 6 - i; j++) { // Print the number 'i' (6 - i times)
            printf("%d ", i);
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}