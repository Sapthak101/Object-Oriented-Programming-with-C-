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

class B
{
        float y;
    public:
        B(float i)
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

class C : public B, public A
{
    int m, n;
    public:
        C(int a, float b, int c, int d): B(b), A(a)
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
    float b;

    cout<<"Enter the values: "<<endl;
    cin>>a>>b>>c1>>d;

    cout<<endl;

    C c(a,b,c1,d);

    cout<<endl;

    c.show_x();
    c.show_y();
    c.show_mn();

    cout<<endl;

    return 0;
}