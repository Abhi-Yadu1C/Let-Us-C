#include <stdio.h>

int main(){
    int n, i, factorial;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    i = n;
    factorial = 1;
    while (i>=1)
    {
        factorial = factorial * i;
        i--;
    }
    printf("Factorial of %d is %d", n, factorial);
    return 0;
}