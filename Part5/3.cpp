#include<iostream>
using namespace std;

class int_data
{
    private:
        static int count1, count2;
        int data;
    public:
        void getdata()
        {
            cout<<"Enter the value of the integer: "<<endl;
            cin>>data;
            count1++;
        }
        void display()
        {
            cout<<"The value of the integer is: "<<data<<endl;
            count2++;
        }
        static void get_count()
        {
            cout<<endl<<"The number of input calls: "<<count1<<endl;
            cout<<"The number of display calls: "<<count2<<endl<<endl;
        }
};

int int_data::count1;
int int_data::count2;

int main()
{
    int_data d1, d2, d3;

    d1.getdata();
    int_data::get_count();
    d2.getdata();
    int_data::get_count();
    d3.getdata();
    int_data::get_count();

    cout<<endl<<endl<<endl;

    d1.display();
    int_data::get_count();
    d2.display();
    int_data::get_count();
    d3.display();
    int_data::get_count();

    return 0;
}