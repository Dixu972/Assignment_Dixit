/*7). WAP to print Fibonacci series up to given numbers*/
#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3=n1+n2,i=1,end;
	printf("Enter How Many Steps You Want? : ");
	scanf("%d",&end);
	printf("Fibonaci Series : %d\t %d\t %d\t",n1,n2,n3);
	while(i<=end-3)
	{
		n1=n2;
		n2=n3;
		n3=n1+n2;
		printf("%d\t",n3);
		i++;
	}
	return 0;
}
