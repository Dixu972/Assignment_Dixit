/*5). Looping programs:
	4. How many odd numbers are there*/
#include<stdio.h>
int main()
{
	int num,i,odd=0;
	printf("Input The 10 Numbers : \n");
	for (i=1;i<=10;i++)
	{
		printf("Number-%d : ",i);
		scanf("%d",&num);
		if(num%2!=0)
		{
			odd++;
		}
	}
	printf("Odd Number is %d",odd);
	return 0;
}
