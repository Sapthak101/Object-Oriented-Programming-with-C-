#include<iostream>
using namespace std;

class BC
{
    public:
        int b;
        void show()
        {
            cout<<"b = "<<b<<endl;
        }
};
class DC: public BC
{
    public:
        int d;
        void show()
        {
            cout<<" b ="<<b
                <<"\nd = "<<d;
        }
};
int main()
{
    BC *bptr;
        BC base;
            bptr=&base;    //typecasting can also be done ((DC *) bptr->shwo())
            bptr->b=100;
            bptr->show();

        DC derived;
            bptr=&derived;
            bptr->b=200;

    DC *dptr;
        dptr=&derived;
            dptr->d=300;
            dptr->BC::show();
            dptr->b=700;
            dptr->show();

    return 0;
}