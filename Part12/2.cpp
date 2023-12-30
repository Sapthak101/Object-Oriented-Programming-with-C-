#include<iostream>
using namespace std;

template <class T1>
void integer_taker(T1 a)
{
    cout<<"The integer is: "<<a<<endl;
}
template <class T1, class T2>
void integer_double_taker(T1 a, T2 b)
{
    cout<<"The integer is: "<<a<<endl;
    cout<<"The double is: "<<b<<endl;
}

int main()
{
    int a;
    double b;

    cout<<"Enter an integer: ";
    cin>>a;
    integer_taker(a);

    cout<<"Enter an integer and a double: ";
    cin>>a>>b;
    integer_double_taker(a, b);

    return 0;
}

