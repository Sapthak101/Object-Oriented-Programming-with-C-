#include<iostream>
using namespace std;

class data2;
class data1
{
    private:
        int num1;

    public:
        void getdata()
        {
            cout<<("Enter data for Num1 corresonding to class-data1: ");
            cin>>num1;
        }
        friend void swap(data1, data2);
};

class data2
{
    private:
        int num2;

    public:
        void getdata()
        {
            cout<<("Enter data for Num2 corresonding to class-data1: ");
            cin>>num2;
        }
        friend void swap(data1, data2);
};

void swap(data1 d1, data2 d2)
{
    int temp;

    temp=d1.num1;
    d1.num1=d2.num2;
    d2.num2=temp;

    cout<<"Num1 from class-data1 is: "<<d1.num1<<endl;
    cout<<"Num2 from class-data2 is: "<<d2.num2<<endl;
}

int main()
{
    data1 a;
    data2 b;

    a.getdata();
    b.getdata();
    swap(a, b);

    return 0;
}