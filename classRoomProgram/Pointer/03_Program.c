#include <stdio.h>

int main(){
    char Name[]={"N""q""e""r""g""f""c""s""c""d""\0"};
    // char Name[]={"HelloWords"};
    int i;
    i = 0;
    while (i < 10) {
        printf("%c",Name[i]);
        i++;
    }
    return 0;
}