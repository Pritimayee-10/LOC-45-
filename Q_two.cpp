/*Write a program that takes a number as input and checks whether it is
positive, negative or zero.
*/
#include<stdio.h>
int main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num==0)
	{
		printf("The number is zero");
	}
	else if(num>0)
	{
		printf("The number is positive");
	}
	else
	{
		printf("The number is negative");
	}
}
