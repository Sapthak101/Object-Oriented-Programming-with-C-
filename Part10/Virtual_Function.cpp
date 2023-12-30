#include<iostream>
using namespace std;

class Base
{
    public:
        void display() {cout<<"\n Display base";}
        virtual void show(int a) {cout<<a<<endl; cout<<"\n show base";}
};

class Derived: public Base
{
    public:
        void display() {cout<<"\n Display derived";}
        void show() {cout<<"\n show derived";}
};

class Derived2: public Derived
{
    public:
        void display() {cout<<"\n Display derived2";}
        void show() {cout<<"\n show derived2";}
};

int main()
{
    Base B;
    //Derived D;
    Derived2 D1;
    Base *bptr;
    /*
    bptr=&B;
    bptr->display();
    bptr->show();

    bptr=&D;
    bptr->display();
    bptr->show();
    */
    bptr=&D1;
    bptr->display();
    bptr->show();

    return 0;
}