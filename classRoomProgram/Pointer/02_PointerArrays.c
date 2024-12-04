#include <stdio.h>

int main(){
    int A[10],i;
    int *ptr;

    for(i=0;i<10;i++){
        printf("enter");
        scanf("%d",&A[i]);
    }
    ptr = A;
    printf("The Entered Array A is as:\n");
    for(i=0; i<10; i++){
        printf("%p\n",*(ptr+i));
    }
    return 0;
}