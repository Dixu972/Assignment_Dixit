/*9). Write a program to find out the max from given number (E.g., No: -1562
    Max number is 6)*/
#include<stdio.h>
int main()
{
	int number,large=0,rem;
	printf("Enter Number : ");
	scanf("%d",&number);
	int temp=number;
	while(number!=0)
	{
		rem=number%10;
		if(rem>large)
		{
			large=rem;
		}
		number=number/10;
	}
	printf("%d Is Largest Digit From %d",large,temp);
	return 0;
}
