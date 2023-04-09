//Write a C program to count the frequency of each character of the string.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];//string declaration
    int i, freq[300] = {0};
    printf("Enter a string: ");
    gets(str);
    for (i = 0; i < strlen(str); i++)
	{
        freq[str[i]]++;
    }
    printf("Character frequency in the string:\n");
    for (i = 0; i <=255; i++)
	{
        if (freq[i] != 0) 
		{
            printf("'%c' occurs %d times\n", i, freq[i]);
        }
    }

    return 0;
}
