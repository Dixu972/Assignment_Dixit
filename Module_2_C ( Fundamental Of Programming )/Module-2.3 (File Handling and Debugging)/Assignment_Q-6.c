/*6). WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array.*/
#include<stdio.h>
int main()
{
	int array[2][2],array2[2][2],array3[2][2],i,j;
	printf("Enter 4 Values for First Array : ");
	//for first value
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	//for second value
	printf("Enter 4 values for Second Array : ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&array2[i][j]);
		}
	}
	//addition for sum
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			array3[i][j]=array[i][j] + array2[i][j];
		}
	}
	printf("\nAddition Of Array Is : \n");
	//print the sum result
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",array3[i][j]);	
		}
		printf("\n");
	}
	//substraction of sum
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			array3[i][j]=array[i][j] - array2[i][j];
		}
	}
	printf("\nAddition Of Array Is : \n");
	//print the sum result
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",array3[i][j]);	
		}
		printf("\n");
	}
	//multiplication of sum
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			array3[i][j]=array[i][j] * array2[i][j];
		}
	}
	printf("\nAddition Of Array Is : \n");
	//print the sum result
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",array3[i][j]);	
		}
		printf("\n");
	}
	return 0;
}
