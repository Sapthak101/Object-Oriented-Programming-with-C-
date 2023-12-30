#include<iostream>
using namespace std;

class distance1

{
    private:
        int a, b;
    public:
        void getdata()
        {
            cout<<"Enter the values of the object: ";
            cin>>a>>b;
        }
        void operator-();
        void display()
        {
            cout<<"The negation of the object: "<<a<<" feet "<<b<<" inch "<<endl;
        }
};

void distance1::operator-()
{
    while (b>12)
    {
        a++;
        b-=12;
    }
    a=-(a);
}

int main()
{
    distance1 a1;

    a1.getdata();

    -a1;
    
    a1.display();

    return 0;
}