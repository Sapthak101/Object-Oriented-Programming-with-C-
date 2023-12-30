#include<iostream>
using namespace std;

class data
{
    private:
        char name[100];
        int roll;
        float total_number;

        static float grand_total; 
        static int count;

    public:
        void getdata()
        {
            cout<<"Enter the name of the student: ";
            cin>>name;
            cout<<"Enter your roll number: ";
            cin>>roll;
            cout<<"Enter your total number: ";
            cin>>total_number;

            grand_total+=total_number;
            count++;
        }

        void display()
        {
            cout<<endl<<endl;
            cout<<"The name is: "<<name<<endl;
            cout<<"The roll number is: "<<roll<<endl;
            cout<<"The total number is: "<<total_number<<endl;
        }

        static void average()
        {
            float average=(grand_total/count);
            cout<<endl<<endl<<"The average score of total number of "<<count<<" students"<<" is "<<average<<endl;
        }
};

float data::grand_total;
int data::count;

int main()
{
    int num, i;

    cout<<"Enter the number of students for whom you want to enter the data: ";
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

    data::average();

    return 0;
}