// Mathematical operation on character to get other character
#include <stdio.h>
int main(){
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");

    char letter = 'a';
    int num;

    printf("Enter a number : ");
    scanf("%d" , &num);
    printf("Character before mathematical operation is %c\n" , letter);
    letter = letter + num ; 
    printf("Character before mathematical operation is %c" , letter);
    return 0;
}