#include <stdio.h>

int main(){
    int n, i, sum=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        if(i%2!=0){
            sum = sum + (i*i);
        }
    }
    printf("Sum of odd numbers in the range is: %d", sum);
    return 0;
}