/*4).WAP to show :-
    2. Vowel or Consonant using switch case*/
#include<stdio.h>
int main()
{
	char ch;
	printf("enter the value from the keyboard : ");
	scanf("%c",&ch);
	if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
	{
		printf("That keyword is Vovel");
	}
	else
	{
		printf("That keyword is Consonant");
	}
}
