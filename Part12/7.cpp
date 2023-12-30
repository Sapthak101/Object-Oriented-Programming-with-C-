#include<iostream>
using namespace std;

void multi_catch(int a, char *d)
{
    try
    {
        if (a==1)
            throw(1);
        else if (a==2)
            throw(2.5);
        else if (a==3)
            throw('d');
    }
    catch (int a)
    {
        cout<<"Exception occured with an integer"<<endl;
    }
    catch (double b)
    {
        cout<<"Exception occured with a double"<<endl;
    }
    catch (char c)
    {
        cout<<"Exception occured with a char"<<endl;
    } 
}
int main()
{
    int a;
    double b;
    char c;
    char d[100];

    cout<<"Enter the data (integer/ double/ character and string): "<<endl;
    cin>>a>>b>>c>>d;

    multi_catch(a, d);
    cout<<d<<endl;

    return 0;
}