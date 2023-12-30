#include<iostream>
using namespace std;
int main()
{
    int y, y1, temp;
    int &x= y;
    int &x1=y1;
    
    cout<<"Enter the value of y and y1"<<endl;
    cin>>y>>y1;
    cout<<"The value of y= "<<y<<" and the value of y1= "<<y1<<endl;

    temp=x;
    x=x1;
    x1=temp;

    cout<<"The value of y and y1 after swapping is: y= "<<y<<" and y1= "<<y1<<endl;

    return 0;
}