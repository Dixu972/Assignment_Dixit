/*9). Write a program of structure employee that provides the following information-
    print and display empno, empname, address and age */
#include<stdio.h>
struct employee
{
	int e_num;
	char e_name[10];
	char e_address[15];
	int e_age;
};
int main()
{
	struct employee emp;
	
	printf("----------Print The Employee Details----------");
	printf("\nEnter The Employee Number : ");
	scanf("%d",&emp.e_num);
	printf("Enter The Employee Name : ");
	scanf("%s",&emp.e_name);
	printf("Enter The Employee Age : ");
	scanf("%d",&emp.e_age);
	printf("Enter The Employee Address : ");
	scanf("%s",&emp.e_address);
	
	printf("----------Display the Employee Details----------");
	printf("\nEmployee Number Is %d",emp.e_num);
	printf("\nEmployee Name Is %s",emp.e_name);
	printf("\nEmployee Age Is %d",emp.e_age);
	printf("\nEmployee Address Is %s",emp.e_address);
	return 0;
}
