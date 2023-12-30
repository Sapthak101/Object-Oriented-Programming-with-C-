#include<iostream>
using namespace std;

void divide(double a1, double a2)
{
    if (a2==0)
        throw a2;
    else
    {
        cout<<"The division of the entered numbers: "<<a1/a2<<endl;
    }

}

int main()
{
    double a, b;
    cout<<"Enter two integers to divide them: ";
    cin>>a>>b;

    try
    {
        divide(a, b);
    }
    catch(double i)
    {
        cout<<"Exception occured"<<endl;
        cout<<"The denominator is zero"<<endl;
    }

    return 0;
}