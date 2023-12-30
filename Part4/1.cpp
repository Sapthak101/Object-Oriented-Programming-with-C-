#include<iostream>
using namespace std;

class data{
    private:
    int x;
    int y;

    public:
    void getdata_reversal(){
        int a, b, temp;

        cout<<"Enter the value of x and y: "<<endl;
        cin>>a>>b;  

        x=b;
        y=a;

        cout<<"After swapping the value of x and y, "<<" x= "<<x<<" y= "<<y<<endl;
    }
};

int main()
{
    data obj_1;

    obj_1.getdata_reversal();

    return 0;
}