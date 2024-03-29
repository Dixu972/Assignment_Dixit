/*11). WAP to show difference between Structure and Union. */
#include<stdio.h>
#include<string.h>
struct employee {
	int id;
	char name[100];
};
union emp {
	int e_id;
	char e_name[100];
};
int main()
{
	struct employee s1;
	union emp u1;
	//struct
	printf("Enter Id  For First Employee And Name : ");
	scanf("%d %s",&s1.id,&s1.name);
	printf("Employee Id Is %d And Name Is %s",s1.id,s1.name);
	//union
	printf("\nEnter The Id For First Employee : ");
	scanf("%d",&u1.e_id);
	printf("First Employee Id Is %d",u1.e_id);
	printf("\nEnter The Name Of First Employee : ");
	scanf("%s",&u1.e_name);
	printf("First Employee Name Is %s",u1.e_name);
	return 0;
}
