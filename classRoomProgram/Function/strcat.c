#include <stdio.h>
#include <string.h>
int main(){
    char string_1[30];
    char string_2[20];
    printf("Enter string one=");
    scanf("%d",&string_1);
    printf("%s", strcat(string_1, string_2));
    return 0;
}