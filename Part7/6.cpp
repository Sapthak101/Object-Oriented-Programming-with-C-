#include<iostream>
using namespace std;

class Employee
{
    protected:
        char name[100][100];
        int id[100], num, i;
        float salary[100];
    public:
        void getdata()
        {
            cout<<"Enter the number of employees for whom data needs to be entered: ";
            cin>>num;

            for (i=0; i<num; i++)
            {
                cout<<"Enter the name: ";
                cin>>name[i];
                cout<<"Enter the id: ";
                cin>>id[i];
                cout<<"Enter the salary: $";
                cin>>salary[i];
            }
        }
};
class Regular : public Employee
{
    protected:
        float DA[100], HRA[100], Basic_salary[100], total_salary[100];
    public:
        void getdata1()
        {
            cout<<endl<<endl;
            cout<<"Regular Employee: "<<endl;
            getdata();
            for (i=0; i<num; i++)
            {
                cout<<"Enter the DA: ";
                cin>>DA[i];
                cout<<"Enter the HRA: ";
                cin>>HRA[i];
                cout<<"Ente the Basic salary: $";
                cin>>Basic_salary[i];

                total_salary[i]=DA[i]+HRA[i]+Basic_salary[i]+salary[i];
            }
        }

        void display1()
        {
            for (i=0; i<num; i++)
            {
                cout<<endl<<endl;
                cout<<"The employee's name is: "<<name[i]<<endl;
                cout<<"The employee's id is: "<<id[i]<<endl;
                cout<<"The employee's salary is: $"<<salary[i]<<endl;
                cout<<"The employee's DA is: "<<DA[i]<<endl;
                cout<<"The employee's HRA is: "<<HRA[i]<<endl;
                cout<<"The total salary is: $"<<total_salary[i]<<endl;
            }
        }
};
class Part_Time : public Employee
{
    protected:
        float HR[100], p_p_HR[100], total_salary[100];
    public:
        void getdata2()
        {
            cout<<endl<<endl;
            cout<<"Part Time Employee: "<<endl;
            getdata();
            for (i=0; i<num; i++)
            {
                cout<<"Enter the number of hours: ";
                cin>>HR[i];
                cout<<"Enter the pay per hour: $";
                cin>>p_p_HR[i];

                total_salary[i]=HR[i]*p_p_HR[i]+salary[i];
            }
        }

        void display2()
        {
            for (i=0; i<num; i++)
            {
                cout<<endl<<endl;
                cout<<"The employee's name is: "<<name[i]<<endl;
                cout<<"The employee's id is: "<<id[i]<<endl;
                cout<<"The employee's salary is: $"<<salary[i]<<endl;
                cout<<"The employee's hour is: "<<HR[i]<<endl;
                cout<<"The employee's pay per hour is: $"<<p_p_HR[i]<<endl;
                cout<<"The total salary is: $"<<total_salary[i]<<endl;
            }
        }   
};

int main()
{
    Regular R1;

    R1.getdata1();
    R1.display1();

    Part_Time P1;

    P1.getdata2();
    P1.display2();

    return 0;
}