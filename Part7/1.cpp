#include<iostream>
using namespace std;

class A
{
    protected:
        int a;
    public:
        void getdata1()
        {
            cout<<"Enter an integer value: ";
            cin>>a;
        }
        void display1()
        {
            cout<<"The value of the entered integer is: "<<a<<endl;
        }
};
class B : public A
{
    protected:
        int b;
    public:
        void getdata2()
        {
            cout<<"Enter an integer value: ";
            cin>>b;
        }
        void display2()
        {
            int sum=a+b;
            cout<<"The summation of a and b is: "<<sum<<endl;
        }
};
class B1
{
    protected:
        int b1;
    public:
        void getdatab_1()
        {
            cout<<"Enter an integer value: ";
            cin>>b1;
        }
        void displayb_1()
        {
            cout<<"The value of b1 is: "<<b1<<endl;
        }
};
class C : public A, public B1
{
    protected:
        int c;
    public:
        void getdata3()
        {
            cout<<"Enter an integer value: ";
            cin>>c;
        }
        void display3()
        {
            int sum;
            sum=a+b1+c;
            cout<<"The summation of a, b1, c is: "<<sum<<endl;
        }
};
class D : public B
{
    protected:
        int d;
    public:
        void getdata4()
        {
            cout<<"Enter an integer value: ";
            cin>>d;
        }
        void display4()
        {
            int sum=a+b+d;
            cout<<"The summation of a, b, d is: "<<sum<<endl;
        }
};
class E : virtual public A
{
    public:
        void odd_even()
        {
            if (a%2==0)
                cout<<"The number "<<a<<" is even"<<endl;
            else
                cout<<"The number "<<a<<" is odd"<<endl;
        }
};
class F : virtual public A
{
    public:
        void prime()
        {
            int i, flag=0;
            for (i=2; i<a; i++)
            {
                if (a%i==0)
                {
                    flag=1;
                    break;
                }
            }

            if (flag==0)
                cout<<"The number "<<a<<" is prime"<<endl;
            else
                cout<<"The number "<<a<<" is not prime number"<<endl;
        }
};
class G : public E, public F
{
    public:
        void prime_odd_even_checker()
        {
            odd_even();
            prime();
        }
};
int main()
{
    B B1;

    {
        // Single Inheritance
        B1.getdata1();
        B1.getdata2();
        B1.display1();
        B1.display2();
    }

    C C1;

    {
        // Multiple Inheritance
        C1.getdata1();
        C1.getdatab_1();
        C1.getdata3();
        C1.display1();
        C1.displayb_1();
        C1.display3();
    }

    D D1;

    {
        // Multilevel Inheritance
        D1.getdata1();
        D1.getdata2();
        D1.getdata4();
        D1.display1();
        D1.display2();
        D1.display4();
    }

    E E1;
    F F1;

    {
        // Hierarchical Inheritance
        E1.getdata1();
        E1.odd_even();

        F1.getdata1();
        F1.prime();
    }

    G G1;

    {
        // Hybrid Inheritance
        G1.getdata1();
        G1.prime_odd_even_checker();
    }

    return 0;
}