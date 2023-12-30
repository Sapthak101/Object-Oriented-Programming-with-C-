#include<iostream>
using namespace std;

int i=0;

class time
{
    private:
        int hr, min;
    public:
        time()
        {
            hr=min=0;
        }
        time(int x, int y=0)
        {
            hr=x;
            min=y;
        }
        void display()
        {
            i++;
            cout<<"The time format- "<<i<<" is= "<<hr<<":"<<min<<endl;
        }
};

int main()
{
    int hr, min;

    time t1;
    t1.display();



    cout<<"Enter the value of the hour and minute: ";
    cin>>hr>>min;

    if ((hr>=0 && hr<=23) && (min>=0 && min<=60))
    {
        time t2(hr, min);
        t2.display();
        time t3=t2;
        t3.display();
    }
    else
        cout<<"Invalid time input"<<endl;

    cout<<"Enter he value of the hour: "<<endl;
    cin>>hr;
        if (hr>=0 && hr<=23)
    {
        time t4(hr);
        t4.display();
        time t5=t4;
        t5.display();
    }
    else
        cout<<"Invalid time input"<<endl;


    return 0;
}

