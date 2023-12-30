#include<iostream>
using namespace std;

class Balagurusamy
{
    public:
        virtual void example()=0;
};
class C: public Balagurusamy
{
    public:
        void example()
        {
            cout<<"C text book";
        }
};
class oops: public Balagurusamy
{
    public:
        void example()
        {
            cout<<" C++";
        }
};

int main()
{
    Balagurusamy *arr[2];

    C el;
    oops e2;

    arr[0]=&el;
    arr[1]=&e2;

    arr[0]->example();
    arr[1]->example();

    return 0;
}