#include <stdio.h>

int main(){
    int i, n ,sum=0;
    i = 20;
    do{
        printf("Enter Interger n =");
        scanf("%d", &n);
        sum = sum + n;
        i = i-1;
    }
    while (i>10);
    {
        printf("sum=%d", sum);
    }
    return 0;
}