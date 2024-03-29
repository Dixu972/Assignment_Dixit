/*5). Looping programs:
    2. WAP to take 10 no. Input from user and find out …*/
#include<stdio.h>
int main()
{
	int num,i;
	printf("Input The 10 Numbers : \n");
	for (i=1;i<=10;i++)
	{
		printf("Number-%d : ",i);
		scanf("%d",&num);
	}
	return 0;
}
