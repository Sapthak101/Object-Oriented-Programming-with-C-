#include<iostream>
using namespace std;

class range;
class data
{
    private:
        char name[100], author[100];
        float price;
    public:
        void getdata()
        {
            cout<<"Enter the name of the book: ";
            cin>>name;
            cout<<"Enter the name of the author: ";
            cin>>author;
            cout<<"Enter the price of the book: $";
            cin>>price;
        }

        void display()
        {
            cout<<endl<<endl;
            cout<<"The name of the book is: "<<name<<endl;
            cout<<"The name of the author is: "<<author<<endl;
            cout<<"The price of the book is: $"<<price<<endl;
        }

        friend void price_range(data, range);
};

class range
{
    private:
        float range1, range2;
    public:
        void getdata()
        {
            cout<<"Enter the price ranges: ";
            cin>>range1>>range2;
        }
        friend void price_range(data, range);
};

void price_range(data d1, range d2)
{
    if (d1.price>=d2.range1 && d1.price<=d2.range2)
    {
        cout<<endl;
        cout<<"The name of the book is: "
        <<d1.name
        <<endl;
        cout<<"The author of the book is: "<<d1.author<<endl;
        cout<<"The price of the book is: $"<<d1.price<<endl;
    }
}

int main()
{
    int num, i;

    cout<<"Enter the number of books about which you want"
        " to enter the information: ";
    cin>>num;

    data d[num];

    for (i=0; i<num; i++)
    {
        d[i].getdata();
    }

    for (i=0; i<num; i++)
    {
        d[i].display();
    }

    range e;

    e.getdata();

    for (i=0; i<num; i++)
    {
        price_range(d[i], e);
    }

    return 0;
}