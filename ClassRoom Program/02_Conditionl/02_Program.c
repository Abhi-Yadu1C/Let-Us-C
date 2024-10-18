/*
Find the number +ve and -ve
*/

#include <stdio.h>

int main(){
    int num;
    printf("Enter number");
    scanf("%d",&num);
    if(num!=0){
        if(num>0){
            printf("Number is +ve");
        }else{
            printf("Number is -ve");
        }
    }else{
        printf("Number is Zero");
    }

    return 0;
}