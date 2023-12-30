#include<iostream>
#include<fstream>
using namespace std;
class A
{
    public:
    int a;  
    public:
        void getdata()
        {
            cin>>a;
        }
        void display()
        {
            cout<<a;
        }
};

int main()
{
    A a1[3];

    fstream file;
    file.open("Question7.txt", ios::out);

    cout<<"ENter the data: "<<endl;
    for (int i=0; i<3; i++)
    {
        a1[i].getdata();
        file.write((char *)&a1, sizeof(a1));
    }
    
    file.close();

    for (int i=0; i<3; i++)
    {
        a1[i].a=0;
    }

    fstream file2;
    file2.open("Question7.txt", ios::in);
    for (int i=0; i<3; i++)
    {
        file2.read((char *)&a1, sizeof(a1));
        a1[i].display();
    }
    file2.close();

    return 0;
}