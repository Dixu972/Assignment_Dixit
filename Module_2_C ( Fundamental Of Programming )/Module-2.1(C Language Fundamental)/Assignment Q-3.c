/*3). WAP to find area of circle, rectangle and triangle. */
#include<stdio.h>
int main()
{
	float radius,pi=3.14,l,w,height,base,ans;
	char choice;
	printf("Enter c for Area of circle\nEnter r for Area of Rectangle\nEnter t for Area of Triangle\n");
    printf("Enter from the Above : ");
    scanf("%c",&choice);
	switch(choice)
	{
		case 'c':
			printf("Enter the radius : ");
			scanf("%f",&radius);
			ans=pi*radius*radius;
			printf("Are Of Circle is %f",ans);
			break;
		case 'r':
			printf("Enter the value of L : ");
			scanf("%f",&l);
			printf("Enter the value of W : ");
			scanf("%f",&w);
			ans=l*w;
			printf("Area of Rectangle is %f",ans);
			break;
		case 't':
			printf("Enter the value of Height : ");
			scanf("%f",&height);
			printf("Enter the value of Base : ");
			scanf("%f",&base);
			ans=0.5*height*base;
			printf("Area of Triangle is %f",ans);
			break;
		default:
			printf("Kindly enter from the Above");
    }
	return 0;
}
