//Write a C program to remove a specific character from a string.
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100], ch, new_str[100];//Declaration
    int i, j = 0;
    printf("Enter a string: ");
    gets(s);
    printf("Enter the character you want to remove: ");
    scanf("%c", &ch);
    for (i = 0; i < strlen(s); i++) 
	{
        if (s[i] != ch) 
		{
            new_str[j++] = s[i];
        }
    }
    new_str[j] = '\0';
    printf("The string after removing %c: %s", ch, new_str);
    return 0;
}

