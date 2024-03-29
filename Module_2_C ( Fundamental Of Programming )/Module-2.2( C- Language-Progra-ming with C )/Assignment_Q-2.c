/*2). WAP to swap two numbers without using third variable*/ 
#include<stdio.h>
int  main()
{
	int a,b;
	printf("enter the values");
	scanf("%d %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n after swapping the values a:%d,b:%d",a,b);
	return 0;
}

