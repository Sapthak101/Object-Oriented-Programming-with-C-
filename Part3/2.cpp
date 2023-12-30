#include<iostream>
using namespace std;
int main()
{
    int x;
    int &y=x;

    cout<<"y is the reference variable"<<endl;

    cout<<"Enter the value of x"<<endl;
    cin>>x;
    
    cout<<"The value of x is: "<<x<<endl;
    cout<<"The value of y is: "<<y<<endl;

    cout<<"Enter the value of y: "<<endl;
    cin>>y;
    cout<<"The value of y is: "<<y<<endl;
    cout<<"The value of x is: "<<x<<endl;

    cout<<"Enter the value of x: "<<endl;
    cin>>x;
    cout<<"The value of x is: "<<x<<endl;
    cout<<"The value of y is: "<<y<<endl;

    return 0;
}