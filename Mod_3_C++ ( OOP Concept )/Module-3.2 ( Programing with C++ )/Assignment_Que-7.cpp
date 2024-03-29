/* 7). Create a class person having members name and age. Derive a class student having member 
	percentage. Derive another class teacher having member salary. Write necessary member 
	function to initialize, read and write data.Write also Main function (Multiple Inheritance) */
#include<iostream>
using namespace std;
class person{
	string name;
	int age;
	public:
		void setperson(int a, string n)
		{
			name = n;
			age = a;
		}
		void displayperson()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Age:"<<age<<endl;
		}			
};
//student detail's
class student : person{
	float percentage;
	public:
		void setstudent(string n, int a, float p)
		{
			percentage = p;
			setperson(a,n);
		}
		void displaystudent()
		{
			cout<<"--------Student detail's-------- \n";
			displayperson();
			cout<<"Percentage is: "<<percentage<<endl;
		}
};
//teacher detail's
class  teacher: person{
	float salary;
	public:
		void setteacher(string n, int a, float s)
		{
			salary = s;
			setperson(a,n);
		}
		void displayteacher(){
			cout<<"--------Teachers Detail's-------- \n";
			displayperson();
			cout<<"Salary:"<<salary<<endl;
		}
};
int main()
{
	//student detail's
	student s;
	s.setstudent("sdfwr",15,90);
	s.displaystudent();
	//teacher detail's
	teacher t;
	t.setteacher("sdsvd",30,5000);
	t.displayteacher();
	return 0;
}
