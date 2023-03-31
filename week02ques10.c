//Write a program to find the total number of alphabets , digits and special 
//characters in a string.
//code:
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, alphabets = 0, digits = 0, special_chars = 0;

    printf("Enter a string: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++) {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;
        }
        else if(str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        else {
            special_chars++;
        }
    }

    printf("Total number of alphabets: %d\n", alphabets);
    printf("Total number of digits: %d\n", digits);
    printf("Total number of special characters: %d\n", special_chars);

    return 0;
}

