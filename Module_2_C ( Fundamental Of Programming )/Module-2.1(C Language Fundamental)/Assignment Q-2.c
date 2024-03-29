/*2). Write a program to make Simple calculator (to make addition, subtraction,
      multiplication, division and modulo).*/
#include<stdio.h>
int main()
{
	char choice;
	int num1,num2,add,sub,mul,div,mod;
	printf("Enter Number-1 : ");
	scanf("%d",&num1);
	printf("Enter Numbe-2 : ");
	scanf("%d",&num2);
	add = num1 + num2;
	sub = num1 - num2;
	mul = num1 * num2;
	div = num1 / num2;
	mod = num1 % num2;
	printf("\n%d is Addition Of %d And %d\n",add,num1,num2);
	printf("\n%d is Substraction Of %d And %d\n",sub,num1,num2);
	printf("\n%d is Multiplication Of %d And %d\n",mul,num1,num2);
	printf("\n%d is Division Of %d And %d\n",div,num1,num2);
	printf("\n%d is Modulo Of %d And %d\n",mod,num1,num2);
	return 0;
}
