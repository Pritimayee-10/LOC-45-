//Write a C program to add two numbers using pointers.
#include <stdio.h>
int main()
{
    int num1, num2, sum;
    int *a,*b;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    a= &num1;
    b= &num2;
    sum = *a+ *b;
    printf("Sum of %d and %d is %d", *a, *b, sum);
    return 0;
}
