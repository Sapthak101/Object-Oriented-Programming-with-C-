#include<iostream>
using namespace std;

int j=0;
class complex
{
    private:
        int real, imag;
    public:
        void getdata()
        {
            cout<<"Enter the value of the object "<<++j<<"of class complex: ";
            cin>>real>>imag;
        }
        void operator++(int);
};

void complex:: operator++(int)
{
    real=real++;
    imag=imag++;
    cout<<"Resultant after the post increment operation on the object: "<<real<<"+"<<imag<<"i"<<endl;
}

int main()
{
    complex a1;

    a1.getdata();

    a1++;

    return 0;
}
//In the pre and post increment it can be done with both friend and member function, but in both case an extra argument as int should be passed in case of post increment