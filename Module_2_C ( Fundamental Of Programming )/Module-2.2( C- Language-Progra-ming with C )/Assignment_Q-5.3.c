/*5). Looping programs:
    3. How many Even numbers are there*/
#include<stdio.h>
int main()
{
	int num,i,even=0;
	printf("Input The 10 Numbers : \n");
	for (i=1;i<=10;i++)
	{
		printf("Number-%d : ",i);
		scanf("%d",&num);
		if(num%2==0)
		{
			even++;
		}
	}
	printf("Even Number is %d\n",even);
	return 0;
}
