#include<iostream>
using namespace std;

class calculation
{
    public:
    void find_perimeter(float r1)
    {
        cout<<2*3.14*r1<<endl;
    }
    void find_perimeter(float r1, float r2)
    {
        cout<<2*(r1+r2)<<endl;
    }
    void find_perimeter(float r1, float r2, float r3)
    {
        cout<<r1+r2+r3<<endl;
    }
};

int main()
{
    calculation c1, c2, c3;

    c1.find_perimeter(100);
    c1.find_perimeter(100, 200);
    c1.find_perimeter(100, 200, 300);

    return 0;
}