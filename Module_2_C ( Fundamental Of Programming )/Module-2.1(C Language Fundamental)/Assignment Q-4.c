/*4).WAP to find simple interest. */
#include<stdio.h>
int main()
{
	float p,r,t,simple_interest;
	printf("Enter the Principle of interest : ");
	scanf("%f",&p);
    printf("Enter the Rate of interest : ");
	scanf("%f",&r);
    printf("Enter the Time of interest : ");
	scanf("%f",&t);
	simple_interest=p*r*t/100;
	printf("Simple Interest is %f",simple_interest);
	return 0;
}
