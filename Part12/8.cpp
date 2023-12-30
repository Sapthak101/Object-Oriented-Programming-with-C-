#include<iostream>
using namespace std;

void multi_catch(int a, char *d)
{
    if (a==1)
        throw(1);
    else if (a==2)
        throw(2.5);
    else if (a==3)
        throw('d');
    cout<<d<<endl;   
}
int main()
{
    int a;
    double b;
    char c;
    char d[100];

    cout<<"Enter the data (integer/ double/ character and string): "<<endl;
    cin>>a>>b>>c>>d;

    try
    {
        multi_catch(a, d);
    }
    catch (...)
    {
        cout<<"Exception occured"<<endl;
    }

    return 0;
}