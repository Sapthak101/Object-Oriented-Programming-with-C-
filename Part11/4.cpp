#include<iostream>
using namespace std;

class A
{
    public:
        virtual void show()=0;
};
// is it possible to do function overloading between the functions of different classes
class B: public A
{
    public:
        void show()
        {
            cout<<"I belong to class B"<<endl;
        }
};

class C: public B
{
    public:
        void show()
        {
            cout<<"I beloeng to class C"<<endl;
        }
};

int main()
{
    A *ptr;

    B b1;
    ptr=&b1;
    ptr->show();

    C c1;
    ptr=&c1;
    ptr->show();

    return 0;
}