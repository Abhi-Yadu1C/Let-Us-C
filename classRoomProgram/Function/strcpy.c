#include <stdio.h>
#include<string.h>

int main(){
    char string_1[] = "Hello";
    char string_2[] = "World";
    strcpy(string_1, string_2);
    printf("%s %s\n", string_1, string_2);
    return 0;
}