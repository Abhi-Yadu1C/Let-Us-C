#include <stdio.h>

int main(){
    int A[10], i, max;
    printf("Enter the number");
    for(i=0; i<10; i++){
        scanf("%d", &A[i]);
    }
        for(i=0; i<10; i++){
            if(max>A[i]);
            max=A[i];
    }
    printf("Maximum number is %d", max);
    return 0;
}