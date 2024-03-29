/* 1). WAP to create simple calculator using class */
#include<iostream>
using namespace std;
class calculator
{
	float a,b;
	public:
		void add_number()
		{
			cout<<"Enter First Number :";
			cin>>a;
			cout<<"Enter Second Number : ";
			cin>>b;
		}
		float add()
		{
			return a+b;
		}
		float sub()
		{
			return a-b;
		}
		float mul()
		{
			return a*b;
		}
		float div()
		{
			return a/b;
		}	
};
int main()
{
	int ch;
	calculator c;
	cout<<"Enter 1 For Adition\nEnter 2 For Substraction\nEnter 3 For Multiplication\nEnter 4 For Division";
	cout<<"\nEnter The Choice :";
	cin>>ch;
	switch(ch)
	{
		case 1:
			c.add_number();
			c.add();
			cout<<"Addition Of Two Number Is "<<c.add()<<"\n";
			break;
		case 2:
			 c.add_number();
			 c.sub();
			 cout <<"Substraction of two number is"<<c.sub()<<"\n";
			 break;
		case 3:
			 c.add_number();
			 c.mul();
			 cout<<"Multiplication of two number is"<<c.mul()<<"\n";
			 break;
		case 4:
			 c.add_number();
			 c.div();
			 cout<<"Division of two number is"<<c.div()<<"\n";
			 break;
			 
	}
	return 0;
}
