//Write a C program to find the factorial of a number using pointers.
#include <stdio.h>
int main()
{
    int n,i, fact = 1;
    int *a;
    printf("Enter a number: ");
    scanf("%d", &n);
    a= &n;
    for (i = 1; i <= *a; i++)
	{
        fact*= i;
    }
    printf("Factorial of %d is %d", *a, fact);
    return 0;
}
