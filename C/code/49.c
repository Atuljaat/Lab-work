// to find reverse of a string (without inbuilt function.)
#include <stdio.h>

int main() {
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");
    char str[100], reversed[100];
    int length = 0, i;

    printf("Enter a string (max 99 characters): ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n') {
        length++; 
    }

    for (i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i]; 
    }
    reversed[length] = '\0'; 

    printf("Original string: %s\n", str);
    printf("Reversed string: %s\n", reversed);

    return 0;
}
