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
    protected:
        int marks[100][100], num, i, j;
        char subject[100][100][100];
    public:
        void get_marks()
        {
            for (i1=0; i1<num1; i1++)
            {
                cout<<"Enter the number of subjects for entering marks: ";
                cin>>num;
                cout<<"Enter the name and marks for "<<num<<" subjects: "<<endl;
                for (i=0; i<num; i++)
                {
                    cin>>subject[i1][i];
                    cin>>marks[i1][i];
                }
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
                    cout<<"Subject: "<<subject[i][j]<<endl;
                    cout<<"Marks: "<<marks[i][j]<<endl;
                }
            }
        }
};
class result1 : public test
{
    protected:
        int total_marks[100]={0};
        float percen[100]={0};
    public:
        void total_marks_percentage1()
        {
            for (i1=0; i1<num1; i1++)
            {
                for (i=0; i<num; i++)
                {
                    total_marks[i1]+=marks[i1][i];
                }
                percen[i1]=(((float)total_marks[i1])/((num)*100))*100;
            }
        }
        void display2()
        {
            for (i1=0; i1<num1; i1++)
            {
                    cout<<"The total number obtained by the student is: "<<total_marks[i1]<<endl;
                    cout<<"The percentage of marks is: "<<percen[i1]<<endl;
            }
        }
};
class sports
{
    protected:
        int marks1[100], i2, num2;
    public:
    void sportsdata()
    {
        cout<<"Enter the number of student for whom sports marks needs to be entered: ";
        cin>>num2;

        cout<<"Enter the marks for sports activity: "<<endl;
        for (i2=0; i2<num2; i2++)
        {
            cin>>marks1[i2];
        }
    }
};
class result : public sports, public test
{
    protected:
        int total_marks[100]={0};
        float percen[100]={0};
    public:
        void total_marks_percentage1()
        {
            for (i1=0; i1<num1; i1++)
            {
                for (i=0; i<num; i++)
                {
                    total_marks[i1]+=marks[i1][i];
                }
                total_marks[i1]+=marks1[i1];
                percen[i1]=(((float)total_marks[i1])/((num+1)*100))*100;
            }
        }
        void display2()
        {
            for (i1=0; i1<num1; i1++)
            {
                    cout<<"The total number obtained by the student is: "<<total_marks[i1]<<endl;
                    cout<<"The percentage of marks is: "<<percen[i1]<<endl;
            }
        }
};

int main()
{
    result r1;

    r1.getdata();
    r1.get_marks();
    r1.display();
    r1.sportsdata();
    r1.total_marks_percentage1();
    r1.display2();

    return 0;
}