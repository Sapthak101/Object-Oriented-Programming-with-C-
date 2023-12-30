#include<iostream>
using namespace std;

class student
{
    protected: 
    int roll, age;
    char name[100];
    public:
    void getdata()
    {
        cout<<"Enter name, roll number, age: "<<endl;
        cin>>name>>roll>>age;
    }
};

class sports
{
    protected:
        float x;
    public:
        sports(float i)
        {
            x=i;
        }
        void show_x()
        {
            cout<<"Sports Mark = "<<x<<endl;
        }
        ~sports()
        {
            cout<<"sports destructor invoked"<<endl;
        }
  
};

class test : public student
{
    protected:
        int y, sum=0, i1;
        float mark[100];
    public:
        test(int y1)
        {
            y=y1;
            cout<<"Enter the marks: "<<endl;
            for (i1=0; i1<y; i1++)
            {
                cin>>mark[i1];
            }
        }
        void show_z()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Roll Number: "<<roll<<endl;
            cout<<"Age: "<<age<<endl;
        }
        void show_y()
        {
            cout<<"Number of subjects = "<<y<<endl;
            for (i1=0; i1<y; i1++)
            {
                cout<<mark[i1]<<endl;
            }
        }
        ~test()
        {
            cout<<"test destructor invoked"<<endl;
        }
};

class result : public test , public sports
{
    protected:
    int i; 
    float total_marks;
    public:
        result(float a, int b): test(b), sports(a)
        {
        }
        void show_mn()
        {
            for (i=0; i<y; i++)
                total_marks+=mark[i];
            cout<< "Total marks = "<<total_marks+x<<endl;
            cout<< "Percentage = "<<((total_marks+x)/(100*y+100))*100<<endl;
        }
        ~result()
        {
            cout<<"result destructor invoked"<<endl;
        }

};

int main()
{
    float a, c1;

    cout<<"Enter the sports mark and the number of subjects: "<<endl;
    cin>>a>>c1;

    cout<<endl;

    result c(a, c1);

    cout<<endl;

    c.getdata();
    c.show_z();
    c.show_x();
    c.show_y();
    c.show_mn();

    cout<<endl;

    return 0;
}