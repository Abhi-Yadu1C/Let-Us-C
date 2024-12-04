#include <stdio.h>

int main()
{
    int i, sum=0, A[10];
    printf("Enter the value of Array");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &A[i]);
    }
    for(i=0; i<10; i++){
        sum = (sum + A[i]);
    }
    printf("Sum of Array Elements = %d", sum);
    return 0;
}