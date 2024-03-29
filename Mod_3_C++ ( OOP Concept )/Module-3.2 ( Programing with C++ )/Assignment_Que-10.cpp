/* 10). Write a Program of Two 1D Matrix Addition using Operator Overloading */
#include<iostream>
using namespace std;
class employee{
	int a,b;
	public:
		void get(int x,int y)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<"\nvalues are: "<<a<<" "<<b;
		}
		void operator +(employee add)
		{
			employee res;
			res.a=a+add.a;
			res.b=b+add.b;
			cout<<"\naddition is: "<<res.a<<" "<<res.b;
		}
};

int main()
{
	employee e1;
	employee e2;
	
	e1.get(4,5);
	e2.get(5,6);
	cout<<"values of first object";
	e1.display();
	cout<<"\nvalues of second object";
	e2.display();
	
	e1+e2;
	return 0;
}
