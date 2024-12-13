#include <stdio.h>

int main(){
    int A[3][4],i,j;

    printf("Enter The value of Array\n");
    for(i=0;i<3;i++){
        for(j=0; j<4; j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}