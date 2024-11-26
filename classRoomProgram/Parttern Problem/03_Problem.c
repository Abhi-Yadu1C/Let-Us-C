#include <stdio.h>

int main() {
    int rows, i, j, k;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for(i = 1; i <= rows; i++) {
        for(j = 1; j < rows; j++) {
            printf(" ");
        }
        for(k=1; k<2*i; k++){
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
