#include<iostream>
using namespace std;

class A
{
    private:
        int a;
    public:
        void getdata()
        {
            cout<<"Enter the value of the object: ";
            cin>>a;
        }
        friend void operator-(A &);
        void display()
        {
            cout<<"The negation of the object: "<<a<<endl;
        }
};

void operator-(A &a1)
{
    a1.a=-1*(a1.a);
}

int main()
{
    A a1;

    a1.getdata();

    -a1;
    
    a1.display();

    return 0;
}