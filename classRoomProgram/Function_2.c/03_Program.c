#include <stdio.h>

    int Factorial(int n);
    int Factorial(int n){
        int fact=1, i;
        for(i=1; i<=n; i++){
            fact = fact*i;
        }
     return fact;
    }
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Value of Factorial= %d", Factorial(n));
}