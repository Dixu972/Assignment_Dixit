/*5). Looping programs:
	5. Sum of even numbers*/
#include<stdio.h>
int main()
{
	int num,i,sum=0;
	printf("Input The 10 Numbers : \n");
	for (i=1;i<=10;i++)
	{
		printf("Number-%d : ",i);
		scanf("%d",&num);
		if(num%2==0)
		{
			printf("%d\n",num);
			sum=sum+num;
		}
	}
	printf("Sum Of Even Number is %d\n",sum);
	return 0;
}
