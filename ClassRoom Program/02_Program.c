/*
Swapping the valus of two variable using third variable
*/

#include <stdio.h>

int main(){
    int A, B, Temp;
    printf("Enter the value of A and B");
    scanf("%d %d", &A, &B);
    Temp = A;
    A = B;
    B = Temp;

    printf("A = %d and B = %d", A, B);
    return 0;
}