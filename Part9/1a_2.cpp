#include<iostream>
using namespace std;

int i=0;
class distance1
{
    private:
        int a, b, sum;
    public:
        void getdata()
        {
            cout<<"Enter the values of the object belongs to class distance1: ";
            cin>>a>>b;
        }
        friend distance1 operator+(int, distance1);
        void display()
        {
            cout<<"The summation of integer to object of class distance1 is: "<<a<<" feet "<<sum<<" inch "<<endl;
        }
};

distance1 operator+(int a2, distance1 a1)
{
    distance1 temp;
    temp.sum=a2+a1.b;
    temp.a=a1.a;
    while (temp.sum>12)
    {
        temp.a++;
        temp.sum-=12;
    }
    return (temp);
}

int main()
{
    distance1 a1, a2;
    int num;

    a1.getdata();

    cout<<"Enter the value needed to be added to the distance class object: ";
    cin>>num;

    a2=num+a1;
    
    a2.display();

    return 0;
}