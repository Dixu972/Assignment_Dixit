/*10). Write a program of structure for five employee that provides the following
    information -print and display empno, empname, address and age */
#include<stdio.h>
struct employee{
	
	int e_num;
	char e_name[10];
	char e_address[20];
	int e_age;
};
int main()
{
	struct employee emp[5];
	int i,n=5;
	printf("----------Print The Employee Details----------");
	for(i=0;i<n;i++)
	{
		printf("\nEnter The Employee Number : ");
		scanf("%d",&emp[i].e_num);
		printf("Enter The Employee Name : ");
		scanf("%s",&emp[i].e_name);
		printf("Enter The Employee Age : ");
		scanf("%d",&emp[i].e_age);
		printf("Enter The Employee Address : ");
		scanf("%s",&emp[i].e_address);
	}
	printf("----------Display the Employee Details----------");
	for(i=0;i<n;i++)
	{
		printf("\nEmployee Number Is %d",emp[i].e_num);
		printf("\nEmployee Name Is %s",emp[i].e_name);
		printf("\nEmployee Age Is %d",emp[i].e_age);
		printf("\nEmployee Address Is %s",emp[i].e_address);
		printf("\n");
	}
	
	return 0;
}
