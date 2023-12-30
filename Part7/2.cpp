#include<iostream>
using namespace std;

class student
{
    protected:
        char name[100][100];
        int roll[100], age[100], num1, i1;
    public:
        void getdata()
        {
            cout<<"Enter the number of students for whom data needs to be entered: ";
            cin>>num1;
            for (i1=0; i1<num1; i1++)
            {
                cout<<"Enter the name of the student: ";
                cin>>name[i1];
                cout<<"Enter the age of the student: ";
                cin>>age[i1];
                cout<<"Enter the roll number of the student: ";
                cin>>roll[i1];
            }
        }
};
class test : public student
{
    private:
        int marks[100], num, i, j;
        char subject[100][100];
    public:
        void get_marks()
        {
            cout<<"Enter the number of subjects for entering marks: ";
            cin>>num;
            cout<<"Enter the name and marks for "<<num<<" subjects: "<<endl;
            for (i=0; i<num; i++)
            {
                cin>>subject[i];
                cin>>marks[i];
            }
        }
        void display()
        {
            for (i=0; i<num1; i++)
            {
                cout<<"The name of the student is: "<<name[i]<<endl;
                cout<<"The age of the student is: "<<age[i]<<endl;
                cout<<"The roll number of the student is: "<<roll[i]<<endl;
                cout<<"The marks obtained by the student is: "<<endl;
                for (j=0; j<num; j++)
                {
                    cout<<"Subject: "<<subject[j]<<endl;
                    cout<<"Marks: "<<marks[j]<<endl;
                }
            }
        }

};
int main()
{
    test t1;

    t1.getdata();
    t1.get_marks();
    t1.display();

    return 0;
}
