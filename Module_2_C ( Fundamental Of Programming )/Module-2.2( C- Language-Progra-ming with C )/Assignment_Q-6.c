/*6). WAP to print factorial of given number*/
#include<stdio.h>
int main()
{
	int number,i,fact=1;
	printf("Enter Number : ");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		fact=fact*i;
	}
	printf("%d is Factorial Of %d",fact,number);
	return 0;
}
