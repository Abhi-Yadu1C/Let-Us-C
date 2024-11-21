#include <stdio.h>

int main(){
    int i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    i = 2;
    while (i <= n-1) {
        if(n%i==0){
            printf("%d is not a prime number\n", n);
            break;
        }
        i += 1;
    }
    if(i==n ){
        printf("%d is a prime number\n", n);
    }
    return 0;
}