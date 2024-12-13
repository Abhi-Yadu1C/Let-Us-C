#include <stdio.h>
#include<string.h>
int main(){
    char string_1[30];
    char string_2[30];
    printf("Enter the string value = ");
    scanf("%s %s", string_1, string_2);
    printf("%f", strcmp(string_1,(string_2)));
    return 0;
}