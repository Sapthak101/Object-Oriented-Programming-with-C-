#include<iostream>
using namespace std;

int a=30;
int x=56;
int m;

int main(){
    int a=20, x, m;

    cout<<"Value of a is: "<<a<<endl;
    cout<<"Value of ::a is: "<<::a<<endl;

    cout<<"Enter the value of x: "<<endl;
    cin>>x;
    cout<<"The value of x is: "<<x<<endl;
    cout<<"The value of ::x is: "<<::x<<endl;
    
    cout<<"Enter the value of ::m and m: "<<endl;
    cin>>::m>>m;

    cout<<"The value of ::m is: "<<::m<<" and the value of" 
    <<"m is: "<<m<<endl;

    return 0;
}