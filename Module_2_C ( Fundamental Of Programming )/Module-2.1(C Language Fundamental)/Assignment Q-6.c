/*6). WAP to convert years into days and days into years. */
#include<stdio.h>
int main()
{
    int days, years, weeks;
    char choice;
    printf("Enter Choice For Convert (Days'd' or Years'y') : ");
    scanf("%c",&choice);
    switch(choice)
    {
    	case 'd':
    		printf("Enter days: ");
			scanf("%d", &days);
    		years = (days / 365);
    		weeks = (days % 365) / 7;
    		days  = (days % 365) %7;
    		printf("YEARS: %d\n", years);
    		printf("WEEKS: %d\n", weeks);
    		printf("DAYS: %d", days);
    		break;
    	case 'y':
    		printf("Enter years: ");
			scanf("%d", &years);
			days = years*365;
    		printf("Days: %d\n", days);
    		break;
	}
    return 0;
}
