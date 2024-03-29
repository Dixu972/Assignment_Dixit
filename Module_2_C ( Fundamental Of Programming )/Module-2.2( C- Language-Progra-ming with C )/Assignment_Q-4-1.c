/*4).WAP to show :-
    1. Monday to Sunday using switch case*/
#include<stdio.h>
int main()
{
	int choice;
	char ch;
	printf("1.Monday 2.Tuesday 3.Wednesday 4.Thursday 5.Friday 6.Saturday 7.Sunday");
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
	     	printf("Monday");
	     	break;
	    case 2:
	    	printf("Tuesday");
	    	break;
	    case 3:
	    	printf("Wednesday");
	    	break;
	    case 4:
	    	printf("Thursday");
	    	break;
	    case 5:
	    	printf("Friday");
	    	break;
		case 6:
	    	printf("Saturday");
	    	break;
	    case 7:
	    	printf("Sunday");
	    	break;
	    default:
	    	printf("Kindly enter from the menu");
    }
	return 0;
}
