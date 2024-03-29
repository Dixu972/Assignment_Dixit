/* 4). Write a program of Addition, Subtraction, Division, Multiplication using constructor. */
#include<iostream>
using namespace std;
class cal{
	float a,b;
	public :
		cal(int a,int b)
		{
			this->a = a;
			this->b = b;
		}
		void sum()
		{
			cout<<"The Addition Of Two Number Is "<<a+b<<endl;
			cout<<"The Substraction Of Two Number Is "<<a-b<<endl;
			cout<<"The Multiplication Of Two Number Is "<<a*b<<endl;
			cout<<"The Division Of Two Number Is "<<a/b<<endl;
		}
};
int main()
{
	cal c1(20,50);
	c1.sum();
	
	return 0;
}
