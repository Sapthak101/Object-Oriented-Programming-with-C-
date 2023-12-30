#include<iostream>
using namespace std;

int j=0;
class complex
{
    private:
        float real, imag;
    public:
        void getdata()
        {
            cout<<"Enter the values of the object "<<++j<<" of class complex: ";
            cin>>real>>imag;
        }
        complex operator+(complex);
        friend void operator++(complex &);
        friend void operator++(complex &, int);
        void display()
        {
            cout<<"The summation of the objects belonging to class complex is: "<<real<<"+"<<imag<<"i"<<endl;
        }
};

complex complex::operator+(complex a1)
{
    complex temp;

    temp.real=real+a1.real;
    temp.imag=imag+a1.imag;

    return temp;
}

void operator++(complex &a1)
{
    a1.real=++a1.real;
    a1.imag=++a1.imag;
    cout<<"Resultant after the pre increment operation on the object: "<<a1.real<<"+"<<a1.imag<<"i"<<endl;
}

void operator++(complex &a1, int x)
{
    a1.real=a1.real++;
    a1.imag=a1.imag++;
    cout<<"Resultant after the post increment operation on the object: "<<a1.real<<"+"<<a1.imag<<"i"<<endl;
}

int main()
{
    complex a1, a2, a3;

    a1.getdata();
    a2.getdata();

    a3=a1+a2;
    
    a3.display();

    ++a1;
    a1++;

    return 0;
}

//see 3b