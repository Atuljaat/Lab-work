// to find if a given string is palindrome or not.
#include <stdio.h>
int main() {
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");
    char str[100];
    int i, length = 0, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0') {
        if (str[length] == '\n') {
            str[length] = '\0';
        }
        length++;
    }
    
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
