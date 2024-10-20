// to compare and concatenate two string (without inbuilt function)

#include <stdio.h>
int main() {
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");
    char str1[100], str2[100], concatenated[200];
    int i = 0, j = 0, cmpResult;

    printf("Enter the first string : ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string : ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\0') {
        if (str1[i] == '\n') {
            str1[i] = '\0';
        }
        i++;
    }

    i = 0; 
    while (str2[i] != '\0') {
        if (str2[i] == '\n') {
            str2[i] = '\0';
        }
        i++;
    }

    i = 0; 
    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]) {
        i++;
    }
    cmpResult = str1[i] - str2[i];

    if (cmpResult == 0) {
        printf("The strings are equal.\n");
    } else if (cmpResult < 0) {
        printf("The first string is less than the second string.\n");
    } else {
        printf("The first string is greater than the second string.\n");
    }

    i = 0; 
    while (str1[i] != '\0') {
        concatenated[i] = str1[i]; 
        i++;
    }
    int index = i; 
    concatenated[index++] = ' '; 
    j = 0; 
    while (str2[j] != '\0') {
        concatenated[index++] = str2[j]; 
        j++;
    }
    concatenated[index] = '\0'; 
    printf("Concatenated string: %s\n", concatenated);
    return 0;
}
