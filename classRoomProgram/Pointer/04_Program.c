#include <stdio.h>

int main(){
    int i;
    char Name[]="Helloworld\n" "Abhishek Yadav\n" "Aditya Rai \n" "Aditya Ojha\n" "Deenkar\n";
    char *ptr;
    ptr=Name; // The base Address is assigned to char Pointer Ptr
    i = 0;
    while (ptr[i] != '\0'){ // Null Charecter A String is always termminated with careactor.
        printf("%c",ptr[i]); // Printing the character at the current index
        i++;
    }
    return 0;
}