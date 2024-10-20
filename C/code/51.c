// to copy a string to another string (without inbuilt function.)
#include <stdio.h>

int main()
{
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");
    char str1[100], str2[100];
    int i = 0;

    printf("Enter the source string : ");
    fgets(str1, sizeof(str1), stdin);

    while (str1[i] != '\0')
    {
        if (str1[i] == '\n')
        {
            str1[i] = '\0';
        }
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    printf("Copied string: %s\n", str2);

    return 0;
}
