#include <stdio.h>

int main(){
    int i, n, sum=0;
    printf("Enter The Number");
    scanf("%d", &n);
    for(i=0; i<=n; i++)
    {
        if(i%2==0){
            sum = sum + i;
        }
    }
    printf("Sum of even numbers is %d", sum);
    return 0;
}