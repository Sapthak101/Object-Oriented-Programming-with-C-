#include<iostream>
using namespace std;

class PI
{
    protected:
    char[100] name;
    int roll;

    public:
    void getdata(){
        cout<<"Enter name: "<<endl;
        cin>>name;

        cout<<"Roll Number: "<<endl;
        cin>>roll_number;
    }
};

class AI
{
    protected:
    char[100] sub1, sub2;
    int num1, num2;

    public:
    void getdata(){
        cout<<"Enter the subject name: "<<endl;
        cin>>sub1>>sub2;

        out<<"Enter the number obtained in each subject: "<<endl;
        cin>>num1>>num2;
    }
};

class Student : public PI, public AI 
{
    int total;

    public:
    void getdata(){
        PI::getdata();
    }
    void total_num(){
        total=num1+num2;
        cout<<"The total number obtained in each subject is: "<<total<<endl;
    }

};

int main()
{
    Student s1;

    s1.getdata();
    s1.AI::getdata();

    return 0;
}