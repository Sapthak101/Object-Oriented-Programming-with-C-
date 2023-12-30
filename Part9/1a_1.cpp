#include<iostream>
using namespace std;

int i=0;
class distance1
{
    private:
        int a, b;
    public:
        void getdata()
        {
            cout<<"Enter the values of the object "<<++i<<" of class distance1: ";
            cin>>a>>b;
        }
        distance1 operator+(distance1);
        void display()
        {
            cout<<"The summation of the objects is: "<<a<<" feet, "<<b<<" inches"<<endl;
        }
};

distance1 distance1 :: operator+(distance1 a1)
{
    distance1 temp;
    temp.a=a+a1.a;
    temp.b=b+a1.b;

    while (temp.b>12)
    {
        temp.a++;
        temp.b-=12;
    }
    return (temp);
}

int main()
{
    distance1 d1, d2, d3;

    d1.getdata();
    d2.getdata();

    d3=d1+d2;
    
    d3.display();

    return 0;
}