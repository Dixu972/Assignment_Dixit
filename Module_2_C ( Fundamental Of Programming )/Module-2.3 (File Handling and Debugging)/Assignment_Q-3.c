/*3). WAP to find reverse of string using recursion.*/
#include<stdio.h>
void add();
int main()
{
	printf("Enter string for find reverse using recursion : ");
	add();
	return 0;
}
void add() 
{
    char c;
    scanf("%c", &c);
    if (c != '\n') 
	{
		add();
        printf("%c", c);
    }
}
