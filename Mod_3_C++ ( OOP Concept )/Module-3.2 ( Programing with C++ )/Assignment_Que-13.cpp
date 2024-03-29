/* 13). Write a program to swap the two numbers using friend function without using third variable */
#include<iostream>
using namespace std;
class operation{
	int num1,num2;
	public:
		void get()
		{
			cout<<"Enter Number-1 And 2 : ";
			cin>>num1>>num2;
		}
		friend void swap(operation);
};
void swap(operation a)
{
	cout<<"Befor Swap Number Is "<<a.num1<<" "<<a.num2;
	a.num1 = a.num1*a.num2;
	a.num2 = a.num1/a.num2;
	a.num1 = a.num1/a.num2;
	cout<<"\nAfter Swap Number Is "<<a.num1<<" "<<a.num2;
	
}
int main()
{
	operation obj;
	obj.get();
	swap(obj);
	return 0;
}
