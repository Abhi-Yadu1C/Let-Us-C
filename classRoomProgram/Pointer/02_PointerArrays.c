#include <stdio.h>

int main(){
    int A[5],i;
    int *p;

    for(i=0;i<5;i++){
        printf("enter the value");
        scanf("%d",&A[i]);
    }
    p = A;
    printf("The Entered Array A is as:\n");
    for(i=0; i<5; i++){
        printf("%p\n",*(p+i));
    }
    return 0;
}