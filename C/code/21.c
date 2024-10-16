// To find grades on the basis of marks, using if-else and relational operators
//  Average marks Grade
//  80 to 100 Honours
//  60 to 79 First Division
//  50 to 59 Second Division
//  40 to 49 Third Division
//  0 to 39 Fail
 
 #include <stdio.h>
int main(){
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");

    int marks;
    printf("Enter the marks : ");
    scanf("%d" , &marks);
    if (marks >= 80 && marks <= 100){
        printf("Honours");
    } else if (marks >= 60 && marks <= 79){
        printf("First Division");
    } else if (marks >= 50 && marks <= 59){
        printf("Second Division");
    } else if (marks >= 40 && marks <= 49){
        printf("Third Division");
    } else if (marks >= 0 && marks <= 39){
        printf("Fail");
    } else {
        printf("Invalid marks");
    }
    return 0;
}