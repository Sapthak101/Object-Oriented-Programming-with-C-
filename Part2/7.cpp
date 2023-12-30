#include<iostream>
#include<cmath>

using namespace std;

class coor
{
    public:
    double x1, y1, x2, y2;
};

int main()
{
    coor d;
    double dist;

    cout<<"Enter Coordinate 1"<<endl;
    cin>>d.x1>>d.y1;

    cout<<"Enter Coordinate 2"<<endl;
    cin>>d.x2>>d.y2;

    dist=sqrt((d.x2-d.x1)*(d.x2-d.x1)+(d.y2-d.y1)*
    (d.y2-d.y1)); 

    cout<<"The distance between Coordinate-1: "<<d.x1<<", "<<d.y1;
    cout<<" and Coordinate-2: "<<d.x2<<", "<<d.y2;
    cout<<" is "<<dist;

    return 0;
}