#include<iostream>
using namespace std;

class A
{
        int x;
    public:
        A(int i)
        {
            x=i;
            cout<<"A initialized"<<endl;
        }
        void show_x()
        {
            cout<<"x = "<<x<<endl;
        }
        ~A()
        {
            cout<<"A destructor invoked"<<endl;
        }
        
};

class B : virtual public A
{
        float y;
    public:
        B(float i, int y1) : A(y1)
        {
            y=i;
            cout<<"B initialized"<<endl;
        }
        void show_y()
        {
            cout<<"y = "<<y<<endl;
        }
        ~B()
        {
            cout<<"B destructor invoked"<<endl;
        }
};

class A1 : virtual public A
{
        float y1;
    public:
        A1(float i, int y2) : A(y2)
        {
            y1=i;
            cout<<"A1 initialized"<<endl;
        }
        void show_y1()
        {
            cout<<"y1 = "<<y1<<endl;
        }
        ~A1()
        {
            cout<<"A1 destructor invoked"<<endl;
        }
};

class C : public B, public A1
{
    int m, n;
    public:
        C(int a, int b, float y1, int c, int d): B(b, a), A1(y1, a), A(a)
        {
            m=c;
            n=d;
            cout<<"C initialized"<<endl;
        }
        void show_mn()
        {
            cout<< "m = "<<m<<endl;
            cout<< "n = "<<n<<endl;
        }
        ~C()
        {
            cout<<"C destructor invoked"<<endl;
        }

};

int main()
{
    int a, c1, d;
    float b, y1;

    cout<<"Enter the values: "<<endl;
    cin>>a>>b>>y1>>c1>>d;

    cout<<endl;

    C c(a,b, y1,c1,d);

    cout<<endl;

    c.show_x();
    c.show_y();
    c.show_y1();
    c.show_mn();

    cout<<endl;

    return 0;
}