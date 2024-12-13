#include <stdio.h>
int factorial();
int factorial(){
    int i, n, fact=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    printf("Value of Fac.%d", factorial());
    return 0;
}