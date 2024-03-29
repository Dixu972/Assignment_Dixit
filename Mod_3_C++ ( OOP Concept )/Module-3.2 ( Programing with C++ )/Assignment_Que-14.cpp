/* 14). Write a program to find the max number from given two numbers using friend function */
#include<iostream>
using namespace std;
class operation{
	int x,y;
	public:
		void get()
		{
			cout<<"Enter Two Numbers : ";
			cin>>x>>y;
		}
		friend void max_num(operation);
};
void max_num(operation a)
{
	if(a.x > a.y)
	{
		cout<<"Largest Number Is "<<a.x;
	}
	else
	{
		cout<<"Largest Number Is "<<a.y;
	}
}
int main()
{
	operation obj;
	obj.get();
	max_num(obj);
	return 0;
}
