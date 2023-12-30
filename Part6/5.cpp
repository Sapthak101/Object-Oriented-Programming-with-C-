#include<iostream>
using namespace std;

int i=0;
class complex
{
    private:
        float real, imag;
        static int count;
    public:
        complex()
        {
            real=imag=0;
            count++;
        }
        complex(float x, float y)
        {
            real=x;
            imag=y;
            count++;
        }
        complex (float x)
        {
            real=imag=x;
            count++;
        }
        void display()
        {
            i++;
            cout<<"The complex number- "<<i<<" is= "<<real<<"+"<<imag<<"i"<<endl;
        }
        static void obj_count()
        {
            cout<<"The total number of objects: "<<count+1;
        }
};
int complex::count;

int main()
{
    int a,b;

    complex c1;
    cout<<endl;
    c1.display();

    cout<<endl<<endl;
    cout<<"Enter the real and imaginary part of the complex number: ";
    cin>>a>>b;
    cout<<endl;
    complex c2(a, b);
    cout<<endl;
    c2.display();

    cout<<endl<<endl;
    cout<<"Enter the real and imaginary part of the complex number (single value input): ";
    cin>>a;
    complex c3(a);
    cout<<endl;
    c3.display();

    complex c4=c3;
    cout<<endl;
    c4.display();

    cout<<endl<<endl;
    complex::obj_count();

    return 0;
}