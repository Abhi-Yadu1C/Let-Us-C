#include <stdio.h>

int main(){
    char Name[] = "HelloWorld";
    char *Ptr; int i;
    i = 0;
    while (Name[i] != '\0'){
        printf("%c\n", Name[i]);
        i++;
    }
    return 0;
}