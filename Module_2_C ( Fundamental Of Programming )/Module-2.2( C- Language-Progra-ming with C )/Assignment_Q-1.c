/*1). WAP to make simple calculator (operation include Addition, Subtraction,Multiplication, Division, modulo)*/
#include<stdio.h>
int main()
{
	char choice;
	int num1,num2,ans;
	printf("Enter + For Addition\nEnter - For Subtraction\nEnter * For Multiplication\nEnter / for Division\nEnter m For Modulo");
	printf("\nEnter Value From above : ");
	scanf("%c",&choice);
	switch(choice)
	{
		case '+':
			printf("Enter the number-1 : ");	
			scanf("%d",&num1);
			printf("Enter the number-2 : ");
			scanf("%d",&num2);
			ans=num1+num2;
			printf("%d Addition of num1 and num2",ans);
			break;
		case '-':
			printf("Enter the number-1 : ");	
			scanf("%d",&num1);
			printf("Enter the number-2 : ");
			scanf("%d",&num2);
			ans=num1-num2;
			printf("%d Substraqction of num1 and num2",ans);
			break;
		case '*':
			printf("Enter the number-1 : ");	
			scanf("%d",&num1);
			printf("Enter the number-2 : ");
			scanf("%d",&num2);
			ans=num1*num2;
			printf("%d Multiplication of num1 and num2",ans);
			break;
		case '/':
			printf("Enter the number-1 : ");	
			scanf("%d",&num1);
			printf("Enter the number-2 : ");
			scanf("%d",&num2);
			ans=num1/num2;
			printf("%d Division of num1 and num2",ans);
			break;
		case 'm':
			printf("Enter the number-1 : ");	
			scanf("%d",&num1);
			printf("Enter the number-2 : ");
			scanf("%d",&num2);
			ans=num1 % num2;
			printf("%d Modulo of num1 and num2",ans);
			break;
		default:
			printf("Kindly Enter From The Above");
	}
	return 0;
}
