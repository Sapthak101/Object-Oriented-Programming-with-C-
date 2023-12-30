#include<iostream>
using namespace std;

class dist2;
class dist1
{
    private:
        float feet, inch;
    public:
        void getdata()
        {
            cout<<"Enter the distance in feets and inches: ";
            cin>>feet>>inch;
        }
        friend void comparison(dist1, dist2);
};

class dist2
{
    private:
        float meter, cm;
    public:
        void getdata()
        {
            cout<<"Enter the distance in meters and " 
                                                " centimeters: ";
            cin>>meter>>cm;
        }
        friend void comparison(dist1, dist2);
};

void comparison(dist1 d1, dist2 d2)
{
    float total_dist1, total_dist2;

    total_dist1=d1.inch*0.254+d1.feet*0.3048;
    total_dist2=d2.meter+(d2.cm/100);

    if (total_dist1>total_dist2){
        cout<<"Distance 1 in class-dist1 is greater: "
        <<d1.feet<<" feets, "<<d1.inch<<" inches"<<endl;
    }
    else if (total_dist1<total_dist2)
        cout<<"Distance 2 in class-dist2 is greater: "<<d2.meter<<" meters, "<<d2.cm<<" centimeters"<<endl;
    else
        cout<<"Both the distances are equal"<<endl;
}

int main()
{
    dist1 a;
    dist2 b;

    a.getdata();
    b.getdata();

    comparison(a, b);

    return 0;
}
