/* 11). Write a program to concatenate the two strings using Operator Overloading */
#include<iostream>
using namespace std;
class operation
{
    string a,b;

public:
    operation() {}
    operation(string a,string b)
    {
        this->a=a;
        this->b=b;
    }
    void display()
    {
        cout<<a<<"   "<<b<<endl;
    }
    operation operator+(operation obj)
    {
        operation temp;
        temp.a=a+obj.a;
        temp.b=b+obj.b;
        return temp;
    }
};

int main()
{
    operation a1("abc","ghi"),a2("def","jkl");
    operation a3=a1+a2;
    a3.display();
    return 0;
}

