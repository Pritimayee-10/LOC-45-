/*write a C program to enter the radius of a circle and find its diameter,
circumference and area.*/
#include<stdio.h>
#define pi 3.14 //definning the value of pi
int main()
{
	float rad;
	printf("Enter the radius of the circle:");
	scanf("%f",&rad);
	printf("The diameter of the circle is:%.2f\n",(rad*2));
	printf("Circumference of the circle:%.2f\n",(2*rad*pi));
	printf("Area of the circle is:%.2f",(pi*rad*rad));
}
