/*
Write a program to chek a number is even and odd
*/

#include <stdio.h>

int main(){
    int num, even_odd;
    printf("Enter the number");
    scanf("%d", &num);
    even_odd = num%2;
    if(even_odd == 0)
    printf("%d is even", num);
    else
    printf("%d is odd", num);

    return 0;
}