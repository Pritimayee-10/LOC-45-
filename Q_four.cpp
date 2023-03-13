/*Write a C program to enter two numbers and perform all arithmetic
operations using switch case.*/
#include<stdio.h>
int main()
{
	int num1,num2;
	char op;//operation that to be performed will be chosed by the user
	printf("+ for addition\n- for substraction\nX for multiplication\n/ for divsion\n%% for reminder\n");
	printf("Enter the operation:");
	scanf("%c",&op);
	printf("Enter two number:");
	scanf("%d %d",&num1,&num2);
	switch(op){
		case '+':
		printf("%d+%d=%d",num1,num2,(num1+num2));
		break;
		case '-':
		printf("%d-%d=%d",num1,num2,(num1-num2));	
		break;	
		case 'X':
		printf("%dX%d=%d",num1,num2,(num1*num2));
		break;
		case 'x':
		printf("%dX%d=%d",num1,num2,(num1*num2));
		/*added two cases for multiplication so that user can conveniatily perform 
		the task and doesn't get confused in small x and capital X */
		break;
		case '/':
		printf("%d/%d=%d",num1,num2,(num1/num2)); 
		break;
		case '%':
		printf("%d%%%d=%d",num1,num2,(num1%num2)); //if we will will write %%d it will print %d so we have write %%%d 
		break;
		default:
		printf("invalid operation:(");
	
	}
	return 0;
}
