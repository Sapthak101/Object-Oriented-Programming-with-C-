#include<iostream>
using namespace std;

int count=0, i=0;
class complex
{
    private:
        float real, imag, flag[100];
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

        ~complex()
        {
            cout<<"Destructor message, object no.: "<<count<<" destroyed"<<endl;
            count--;
        }
};

int main()
{
    int a,b;

    complex c1;
    cout<<endl;
    c1.display();

    cout<<"Entering inside a new block"<<endl;
    {
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
        count++;    

        cout<<endl<<endl;
        cout<<"Leaving the new block"<<endl;
        cout<<endl<<endl;
    }

    cout<<endl<<endl;
    cout<<"Leaving the main block"<<endl;
    cout<<endl<<endl;

    return 0;
}