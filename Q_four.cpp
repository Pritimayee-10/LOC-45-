#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter two number:");
	scanf("%d %d",&num1,&num2);
	switch(1){
		case 1:
		printf("%d+%d=%d",num1,num2,(num1+num2));
		case 2:
		printf("%d-%d=%d",num1,num2,(num1-num2));	
		case 3:
		printf("%dX%d=%d",num1,num2,(num1*num2));
		case 4:
		printf("%d/%d=%d",num1,num2,(num1/num2)); 
		case 5:
		printf("%d%%%d=%d",num1,num2,(num1%num2)); //if we will will write %%d it will print %d so we have write %%%d	
	}
	return 0;
}
