#include<iostream>
using namespace std;

template <class T1, class T2>
class A
{
    public:
        void integer_taker(T1 a);
        void integer_double_taker(T1 a, T2 b);
};

template <class T1, class T2>
void A<T1, T2>::integer_taker(T1 a)
{
    cout<<"The integer is: "<<a<<endl;
}

template <class T1, class T2>
void A<T1, T2>::integer_double_taker(T1 a, T2 b)
{
    cout<<"The integer is: "<<a<<endl;
    cout<<"The double is: "<<b<<endl;
}

int main()
{
    int a;
    double b;

    A<int, double> a1;
    A<int , double> a2;

    cout<<"Enter an integer: ";
    cin>>a;
    a1.integer_taker(a);

    cout<<"Enter an integer and a double: ";
    cin>>a>>b;
    a2.integer_double_taker(a, b);

    return 0;
}
