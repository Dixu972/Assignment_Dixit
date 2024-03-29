/* 8). Assume that the test results of a batch of students are stored in three different classes. 
	Class Students are storing the roll number. Class Test stores the marks obtained in two subjects 
	and class result contains the total marks obtained in the test. The class result can inherit the 
	details of the marks obtained in the test and roll number of students. (Multilevel Inheritance) */
#include <iostream>

using namespace std;
class students
{
    int rollnum;
public:
    void setdata_a(int x)
    {
        rollnum = x;
    }
    void getdata_a()
    {
        cout<<"Roll number: "<<rollnum<<endl;
    }
};
class test : public students
{
    int eng,maths;
	public:
	void setdata_b(int y, int z)
    {
        eng = y;
        maths = z;
    }
    void getdata_b()
    {
        cout<<"English: "<<eng<<endl;
        cout<<"Maths: "<<maths<<endl;
    }
};
class result : public test
{
    int totalmarks;
	public:
    void setdata_c(int z)
    {
        totalmarks = z;
    }
    void getdata_c()
    {
        cout<<"Total marks: "<<totalmarks<<endl;
    }
};
int main()
{
    result student;
    student.setdata_a(9);
    student.getdata_a();
    student.setdata_b(60, 70);
    student.getdata_b();
    student.setdata_c(130);
    student.getdata_c();
    return 0;
}
