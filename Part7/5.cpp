#include<iostream>
using namespace std;

class shape
{
    public:
        void circle_a(float r)
        {
            float pi=3.14;
            cout<<"The area of the circle is: "<<3.14*r*r<<endl;
        }
        void triangle_a(float l, float b, float h)
        {
            cout<<"The area of the triangle is: "<<0.5*l*b*h<<endl;
        }
        void rectangle_a(float l, float b)
        {
            cout<<"The area of the rectangle is: "<<l*b<<endl;
        }
};
class circle : public shape
{
    protected:
        float radius;
    public:
        circle(float x)
        {
            radius=x;
            circle_a(radius);
        }
};
class triangle : public shape
{
    protected:
        float length, breadth, height;
    public:
        triangle(float x, float y, float z)
        {
            length=x;
            breadth=y;
            height=z;
            triangle_a(length, breadth, height);
        }
};
class rectangle : public shape
{
    protected:
        float length, breadth;
    public:
        rectangle(float x, float y)
        {
            length=x;
            breadth=y;
            rectangle_a(length, breadth);
        }        
};

int main()
{
    float radius, length, breadth, height;

    cout<<"Enter the value of the radius: ";
    cin>>radius;
    circle c1(radius);

    cout<<"Enter the value of length, breadth, and heigth: ";
    cin>>length>>breadth>>height;
    triangle t1(length, breadth, height);

    cout<<"Enter the value of length and breadth: ";
    cin>>length>>breadth;
    rectangle r1(length, breadth);

    return 0;
}