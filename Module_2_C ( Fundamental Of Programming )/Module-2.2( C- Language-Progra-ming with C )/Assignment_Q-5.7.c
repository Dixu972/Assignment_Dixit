/*5). Looping programs:
   7. WAP to print table up to given numbers*/
#include<stdio.h>
int main()
{
	int num,i=0,end;
	printf("enter Number For The Print The Table : ");
	scanf("%d",&num);
	printf("Enter Number For The End The Table : ");
	scanf("%d",&end);
	printf("\nmultiplication table of %d",num);
	for(i=1;i<=end;i++)
	{
		printf("\n%d*%d=%d\n",num,i,num*i);
	}
	return 0;
}

