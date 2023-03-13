/* Write a program that takes a number as input and prints the sum of its
digits using a do-while loop.*/
#include <stdio.h>
int main()
{
	int num,sum=0,temp;
	printf("Enter a number:");
	scanf("%d",&num);
	do
	{
	   	temp=num%10;
	   	sum+=temp;
	   	num/=10;
	}while(num>0);
	printf("Sum of the digit is:%d",sum);
}

