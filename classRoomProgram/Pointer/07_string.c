#include <stdio.h>

int main(){
    int i;
    char str[] = "HelloWorld";
    printf("the String is as\n");
    i =0;
    while (i<10){
        printf("%c", str[i]);
        i++;
    }
    return 0;
}