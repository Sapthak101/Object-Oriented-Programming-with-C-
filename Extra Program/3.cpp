#include<iostream>
using namespace std;
class A
{
    public:
    int a2;
};

class B
{
    public:
    int b2;
};

class C
{
    public:
    A a;
    B a1;

    C (A &x){
    a.a2=x.a2;
    }
    void showdata()
    {
        cout<<a.a2<<endl;
    }

};


int main()
{
    A a1;
    a1.a2=50;
    B b1;
    C c1(a1);
    c1.showdata();
}