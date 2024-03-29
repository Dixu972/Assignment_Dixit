/*4). WAP to find factorial using recursion.*/
#include<stdio.h>
int add(int n);
int main()
{
	int n;
	printf("Enter a positive integer : ");
	scanf("%d",&n);
	printf("Factorial Of %d = %d",n,add(n));
	return 0;
}
int add(int n)
{
	if(n>=1)
	{
		return n*add(n-1);
	}
	else
	{
		return 1;
	}
}
