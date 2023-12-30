#include<iostream>
using namespace std;
#define MAX 5

void array(int a)
{
    int arr[MAX];
    try
    {
        if (a>MAX)
            throw (a);
        else{
            cout<<"Enter the array elements: ";
            for (int i=0; i<a; i++)
                cin>>arr[i];
            cout<<endl;
            cout<<"The entered elements: "<<endl;
            for (int i; i<a; i++)
                cout<<arr[i]<<" ";
        }
    }
    catch (int a)
    {
        cout<<"An exception has occured"<<endl;
        cout<<"The array elements cannot be entered"<<endl;
    }
}

int main()
{
    int num;

    cout<<"Enter the array size: ";
    cin>>num;

    array(num);

    return 0;
}