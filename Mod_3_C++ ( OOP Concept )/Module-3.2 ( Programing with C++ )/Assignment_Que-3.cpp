/* 3). Write a program to find the multiplication values and the cubic values using inline function */
#include<iostream>
using namespace std;
class add{
	public:
		inline float mul(float x,float y)
		{
			return(x*y);
		}
		inline float cubic(float x)
		{
			return(x*x*x);
		}
};
int main()
{
	add a1;
	float num1,num2;
	
	cout<<"Enter The Number-1 : ";
	cin>>num1;
	cout<<"Enter The Number-2 : ";
	cin>>num2;
	a1.mul(num1,num2);
	a1.cubic(num1);
	cout<<"\nMultiplication Of "<<num1<<" And "<<num2<<" Is : "<<a1.mul(num1,num2)<<endl;
	cout<<"Cubic Of "<<num1<<" Is : "<<a1.cubic(num1);
	
	return 0;
}
