/* 1). Write a program of to swap the two values using templates */
#include<iostream>
using namespace std;
template <class A>
A swap(A num1,A num2)
{
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	cout<<"After Swapping Is "<<num1<<"\t"<<num2;
}
int main()
{
	swap(5,10);
	return 0;
}
