#include <stdio.h>
void Addition();
void Addition(){
    int a, b, sum = 0;
    printf("Enter The value");
    scanf("%d %d", &a,&b);
    sum = a + b;
    printf("Sum of Value = %d", sum);
}
int main(){
    Addition();
    return 0;
}