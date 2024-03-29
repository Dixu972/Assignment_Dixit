/*8). WAP to print number in reverse order e.g.:number = 64728 ---> reverse = 82746*/
#include<stdio.h>
int main()
{
	int number,i,rem,rev=0;
	printf("Enter Number : ");
	scanf("%d",&number);
	int temp=number;
	while(number!=0)
	{
		rem=number%10;
		rev=rev*10+rem;
		number=number/10;
	}
	printf("Reverse Of %d is %d",temp,rev);
	return 0;
}
