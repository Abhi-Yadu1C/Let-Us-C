#include <stdio.h>

int main(){
    int i, n, sum;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    sum = 0;
    for (i = 1; i <= n; i++){
    sum = sum + i;
    printf("Sum of first %d natural numbers = %d", n, sum);
    }
    return 0;
}