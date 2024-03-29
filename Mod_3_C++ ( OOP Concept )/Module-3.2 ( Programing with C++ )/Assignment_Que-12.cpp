/* 12). Write a program to calculate the area of circle, rectangle and triangle using Function Overloading :
	--> Rectangle: Area * breadth
	--> Triangle: ½ *Area* breadth
	--> Circle: Pi * Area *Area      */
#include<iostream>
using namespace std;

	float ar(double area,double breadth)
	{
		return area*breadth;
	}
	float ar(int area,int breadth)
	{				
		return area*breadth*1/2;
	}
	float ar(double area)
	{
		float pi=3.14;
		return pi*area*area;
	}
int main()
{	
	cout<<"Rectangle Is "<<ar(50.5,5.5)<<endl;
	cout<<"Triangle Is "<<ar(50,5)<<endl;
	cout<<"Circle Is "<<ar(50.5);
	return 0;
}
