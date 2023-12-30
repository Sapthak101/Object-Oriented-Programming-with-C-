#include<iostream>
using namespace std;

class time
{
    private:
        int hr, min;
    public:
        void getdata()
        {
            cout<<"Enter the value of the object for class time: ";
            cin>>hr>>min;
        }
        time operator+(time t1)
        {
            time temp;

            temp.hr=hr+t1.hr;
            temp.min=min+t1.min;
            
            while (temp.min>60)
            {
                temp.hr++;
                temp.min-=60;
            }

            return temp;
        }
        time operator=(int x)
        {
            time temp;

            temp.hr=hr;
            temp.min=min;

            return temp;
        }
        void operator==(time t1)
        {
            if (hr==t1.hr && min==t1.min)
                cout<<"The entered objects of class time are same";
            else
                cout<<"The entered objects of class time are not same";
        }
        void display()
        {
            cout<<"The object of class time: "<<hr<<":"<<min;<<endl;
        }
};

int main()
{
    time t1, t2, t3, t4;

    t1.getdata();
    t2.getdata();

    t4=t1+t2;
    t4.display();

    t1==t2;

    cout<<endl ;

    t3=t2.operator=(0);
    t3.display();

    return 0;
}