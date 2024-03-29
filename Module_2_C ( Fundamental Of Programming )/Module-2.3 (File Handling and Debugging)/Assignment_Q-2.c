/*2). WAP of Addition, Subtraction, Multiplication and Division using Switch-case.
    (Must Be Menu Driven)*/
#include<stdio.h>
void add();
void add2();
void add3();
void add4();
void add5();
int main()
{
	int select;
	char choice;
	do
	{
	printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");
	printf("\nEnter Your Choice : ");
	scanf("%d",&select);
	switch(select)
	{
		case 1:
			add();
			break;
		case 2:
			add2();
			break;
		case 3:
			add3();
			break;
		case 4:
			add4();
			break;
		default:
			printf("Kindly Enter From The Above");
	}
	printf("\nDo You want Calculate Other Value ? (y & n) : ");
	scanf("\n%c",&choice);
	}while(choice=='y');
	return 0;
}
void add()
{
	int num1,num2,ans;
	printf("Enter the number-1 : ");	
	scanf("%d",&num1);
	printf("Enter the number-2 : ");
	scanf("%d",&num2);
	ans=num1+num2;
	printf("%d Addition of %d and %d",ans,num1,num2);	
}
void add2()
{
	int num1,num2,ans;
	printf("Enter the number-1 : ");	
	scanf("%d",&num1);
	printf("Enter the number-2 : ");
	scanf("%d",&num2);
	ans=num1-num2;
	printf("%d Substraqction of %d and %d",ans,num1,num2);	
}
void add3()
{
	int num1,num2,ans;
	printf("Enter the number-1 : ");	
	scanf("%d",&num1);
	printf("Enter the number-2 : ");
	scanf("%d",&num2);
	ans=num1*num2;
	printf("%d Multiplication of %d and %d",ans,num1,num2);	
}
void add4()
{
	int num1,num2,ans;	
    printf("Enter the number-1 : ");	
	scanf("%d",&num1);
	printf("Enter the number-2 : ");
	scanf("%d",&num2);
	ans=num1/num2;
	printf("%d Division of %d and %d",ans,num1,num2);
}

	
