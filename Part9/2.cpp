#include<iostream>
using namespace std;

int num=0;
class A
{
    public:
        int a[100000];
        friend istream & operator<<(istream &, A &);
        friend ostream & operator>>(ostream &, A &);
};

istream & operator>>(istream &din, A &a1)
{
    int i;

    cout<<"Enter the number of elements of the array: ";
    cin>>num;
    cout<<"Enter the array elements: "<<endl;
    for (i=0; i<num; i++)
    {
        din>>a1.a[i];
    }

    return (din);
}

ostream & operator<<(ostream & dout, A &a1)
{
    int i;
    for (i=0; i<num; i++)
        dout<<a1.a[i]<<" ";

    return (dout);
}

int main()
{
    A a1;

    cin>>a1;
    cout<<"The values of the array int the object is: "<<a1;
  
    return 0;
}

// for input and output stream the data members should not be private and without member functions friend function should be instead used