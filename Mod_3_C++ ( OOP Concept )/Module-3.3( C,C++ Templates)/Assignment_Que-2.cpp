/* 2). Write a program of to sort the array using templates. */
#include<iostream>
using namespace std;
class operation{
public:
    template <class t>
    t sort()
    {
        t a[100],i,j,temp,count;
        cout<<"Enter numbers:";
        cin>>count;
        for(i=0;i<count;i++)
        {
            cin>>a[i];
        }
        cout<<"The numbers sorted are:";
        for(i=0;i<count;i++)
        {
            for(j=i+1;j<count;j++)

                if(a[j]<a[i])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            {
                cout<<" "<<a[i];
            }
        }
    }
};

int main()
{
    operation a1;
    a1.sort<int>();
    return 0;
}

