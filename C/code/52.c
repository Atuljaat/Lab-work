// to show the use of string function: strcpy(), strcat(), strcmp(), strlen().
#include <stdio.h>
#include <string.h>

int main() {
    printf("Name : Atul Kumar \t Class : BCA 1A\n");
    printf("**************************************\n");
    
    char str1[100], str2[100], combined[200];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    strcpy(combined, str1);
    strcat(combined, " ");
    strcat(combined, str2);

    printf("Combined string: %s\n", combined);

    int cmpResult = strcmp(str1, str2);
    if (cmpResult == 0) {
        printf("The strings are equal.\n");
    } else if (cmpResult < 0) {
        printf("The first string is less than the second string.\n");
    } else {
        printf("The first string is greater than the second string.\n");
    }

    printf("Length of first string: %lu\n", strlen(str1));
    printf("Length of second string: %lu\n", strlen(str2));

    return 0;
}