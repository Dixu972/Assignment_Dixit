/*3). WAP to find number is even or odd using ternary operator*/
#include<stdio.h>
int main()
{
	int num;
	printf("enter the number : ");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("entered  number is even");
	}
	else
	{
		printf("entered number is odd");
	}
	return 0;
}
