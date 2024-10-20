// To read character array using getchar() in do-while loop and print it. Find its length and number of vowels (Case-sensitive)
#include <stdio.h>
int main() {
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");
    char str[100]; 
    int i = 0; 
    char ch;
    int vowelCount = 0;

    printf("Enter a string :\n");
    
    do {
        ch = getchar();
        if (ch != '\n' && i < 99) {
            str[i++] = ch; 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowelCount++; 
            }
        }
    } while (ch != '\n' && i < 99);
    
    str[i] = '\0'; 

    printf("You entered: %s\n", str);
    printf("Length of the string: %d\n", i);
    printf("Number of vowels: %d\n", vowelCount);

    return 0;
}
