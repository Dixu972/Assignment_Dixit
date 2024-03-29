/* 9). Write a program to Mathematic operation like Addition, Subtraction,Multiplication, 
	Division Of two number using different parameters and Function Overloading */
#include<iostream>
using namespace std;
float sum(int x,int y)
{
	return x+y;
}
float sum(double x,double y)
{
	return x-y;
}
float sum(double x,int y)
{
	return x*y;
}
float sum(int x,double y)
{
	return x/y;
}
int main()
{
	cout<<"Addition Is "<<sum(10,2)<<endl;
	cout<<"Substraction Is "<<sum(5.2,3.0)<<endl;
	cout<<"Multiplication Is "<<sum(5.2,3)<<endl;
	cout<<"Division Is "<<sum(15,3.2);
	return 0;
}
