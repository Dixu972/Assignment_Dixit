/*7). WAP Find out length of string without using inbuilt function. */
#include<stdio.h>
int main()
{
	char str[100];
	int i,length;
	printf("Enter The String : ");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	printf("\n Length of Input String : %d",i);
	return 0;
}
