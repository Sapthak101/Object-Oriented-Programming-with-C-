#include<iostream>
using namespace std;

class distance1
{
    private:
        int meter, cm;
    public:
        void getdata()
        {
            cout<<"Enter the distance in meter and cemtimeter for the object of class distance1: ";
            cin>>meter>>cm;
        }
        void operator+(distance1 x)
        {
            int total_dist1=meter+x.meter;
            int total_dist2=cm+x.cm;

            while (total_dist2>100)
            {
                total_dist2-=100;
                total_dist1++;
            }
            cout<<"The total of the objects of class distance1 is "<<total_dist1<<" meter "<<total_dist2<<" cm "<<endl;
        }
        void operator==(distance1 x)
        {
            float total_dist1=(float)meter+((float)cm)/100;
            float total_dist2=(float)x.meter+((float)x.cm)/100;

            distance1 temp;

            if (total_dist1==total_dist2)
                cout<<"Both the objects of class distance1 are same"<<endl;
            else
                cout<<"Both the objects of class distance1 are not same"<<endl;
        }
        distance1 operator>(distance1 x)
        {
            float total_dist1=(float)meter+((float)cm)/100;
            float total_dist2=(float)x.meter+((float)x.cm)/100;
            
            distance1 temp;

            if (total_dist1>total_dist2)
            {
                temp.meter=meter;
                temp.cm=cm;
                return (temp);
            }
            else if (total_dist1<total_dist2)
            {
                temp.meter=x.meter;
                temp.cm=x.cm;
                return (temp);
            }
        }
        void display()
        {
            cout<<"The greater object is: "<<endl;
            cout<<"Meter: "<<meter<<endl;
            cout<<"Cm: "<<cm<<endl;
        }
};

int main()
{
    distance1 d1, d2, d3;

    d1.getdata();
    d2.getdata();

    d1+d2;
    d1==d2;
    d3=d1>d2;
    d3.display();

    return 0;
}

//in case of post increment and assignment operator overloading an extra argument as int should be passed these two are binary operator