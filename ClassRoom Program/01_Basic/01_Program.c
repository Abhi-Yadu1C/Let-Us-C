/*
Swapping the valus of two variable without using third variable
*/

#include <stdio.h>

int main(){
    int A, B;
    printf("Enter The Value of A and B");
    scanf("%d %d",&A,&B);
    printf("Before Swapping\n");
    A = A + B;
    printf("Value of A + B = %d\n",A);
    B = A - B;
    printf("Value of A - B = %d\n",B);
    A = A - B;
     printf("Value of A - B = %d\n",A);

    printf("Value of A = %d and B=%d", A,B);
    return 0;
}