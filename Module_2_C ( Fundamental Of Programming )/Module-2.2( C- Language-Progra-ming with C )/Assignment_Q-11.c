/*11). Write a program you have to make a summation of first and last Digit.
    (E.g.1234 Ans: -5)*/
#include<stdio.h>
int main()
{
	int num,i,j,sum=0;
	printf("Enter Number For Summation Of First And Last Digit : ");
	scanf("%d",&num);
	
	j=num%10;  
	while(num>=10)
	{
		num = num / 10;
	} 
	i=num;
	sum=i+j;
	printf("Summation Of %d And %d = %d",i,j,sum);
	return 0;
}

