#include<iostream>
using namespace std;

class PI
{
    protected:
    char name[100];
    int roll_number;

    public:
    void getdata()
    {
        cout<<"Enter name: "<<endl;
        cin>>name;

        cout<<"Roll Number: "<<endl;
        cin>>roll_number;
    }
};

class AI
{
    protected:
    char sub1[100], sub2[100];
    int num1, num2;

    public:
    void getdata(){
        cout<<"Enter the subject name: "<<endl;
        cin>>sub1>>sub2;

        cout<<"Enter the number obtained in each subject: "<<endl;
        cin>>num1>>num2;
    }
};
class Student : public PI, public AI 
{
    protected:
    int total;

    public:
    void total_num(){
        total=num1+num2;
        cout<<"The total number obtained in each subject is: "<<total<<endl;
    }
};

class sport
{
    protected:
    char sport_name[100];
    int sports_mark;

    public:
    void getdata()
    {
        cout<<"Enter the sport name: "<<endl;
        cin>>sport_name;

        cout<<"Enter the number obtained in each subject: "<<endl;
        cin>>sports_mark;
    }
};

class result : public sport, public Student
{
    public:
    void showdetails()
    {
        cout<<"Name: "<<endl;
        cout<<name<<endl;

        cout<<"Roll Number: "<<endl;
        cout<<roll_number<<endl;

        int total1;
        total1=num1+num2+sports_mark;

        cout<<"Total score: "<<endl;
        cout<<total1;
    }
    void getdata()
    {
        PI::getdata();
    }
};

int main()
{
    result r1;

    r1.getdata();
    r1.AI::getdata();
    r1.sport::getdata();
    r1.showdetails();

    return 0;
}