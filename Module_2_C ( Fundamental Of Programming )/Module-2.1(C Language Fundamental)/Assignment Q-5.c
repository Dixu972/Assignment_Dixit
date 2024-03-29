/*5). WAP to check if the given year is a leap year or not.*/
#include<stdio.h>
int main()
{
	int year;
	printf("Enter The Year : ");
	scanf("%d",&year);
	if(year % 400 == 0)
	{
		printf("%d Is Leap Year",year);
	}
	else if(year % 100 == 0)
	{
		printf("%d Is Not Leap Year",year);
	}
	else if(year % 4 == 0)
	{
		printf("%d is Leap Year",year);
	}
	else
	{
		printf("%d Is Not Leap Year",year);
	}
	return 0;
}
