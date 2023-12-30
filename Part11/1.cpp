#include<iostream>
using namespace std;
class shape
{
    public:
        virtual void getdata()
        {
            cout<<"Passed"<<endl;
        }
};
class circle : public shape
{
    public:
        float r, pi=3.14, area;
        void getdata()
        {
            cout<<"Circle area: "<<endl;
            cout<<"Enter the value of the radius: ";
            cin>>r;
        }
        void c_area()
        {
            area=pi*r*r;
            cout<<"The area of the circle is: "<<area<<endl;
        }
};
class square: public circle
{
    public:
        float l, b;
        void getdata()  // using the virtual functions the derived class data memebers can be accsessed
        {
            cout<<"Square Area"<<endl;
            cout<<"Enter the value of length and breadth: ";
            cin>>l>>b;
        }
        void s_area()
        {
            area=l*b;
            cout<<"The area of the square is: "<<area<<endl;
        }
};
class triangle: public square
{
    public:
        float h;
        void getdata()
        {
            cout<<"Triangle Area"<<endl;
            cout<<"Enter the value of length, breadth, and height: ";
            cin>>l>>b>>h;
        }
        void t_area()
        {
            area=0.5*l*b*h;
            cout<<"The area of the trianle is: "<<area<<endl;
        }
};

int main()
{
    shape *ptr;

    circle c1;
    ptr=&c1;

    ptr->getdata();
    c1.c_area();

    square s1;
    ptr=&s1;

    ptr->getdata();
    s1.s_area();

    triangle t1;
    ptr=&t1;

    ptr->getdata();
    t1.t_area();

    return 0;
}