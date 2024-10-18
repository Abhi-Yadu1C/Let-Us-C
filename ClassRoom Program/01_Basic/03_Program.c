/*
Write a Program to the printe the reverce of a 5-digit number
*/

#include <stdio.h>

int main(){
    int num, rev_n, d5, d4, d3, d2, d1;
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);
    d5 = num%10;
    num = num/10;
    d4 = num%10;
    num = num/10;
    d3 = num%10;
    num = num/10;
    d2 = num%10;
    num = num/10;
    d1 = num%10;

    rev_n = d5*10000+d4*1000+d3*100+d2*10+d1;
    printf("The reverse of the number is: %d", rev_n);
    return 0;
}