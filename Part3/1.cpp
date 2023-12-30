#include<iostream>
using namespace std;

class student
{
    public:

    int marks[100], roll_number, n, sum=0;
    char name[100], subject[100][100];

    void getdata(void);
    void display(void);

};

void student::getdata(void){
    int i;

    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<<"Enter your roll number: "<<endl;
    cin>>roll_number;
    cout<<"Enter the number of subjects for"
        <<"which you want to enter the marks: "<<endl;
    cin>>n;

    for (i=0; i<n; i++)
    {
        cout<<"Enter Subject name: ";
        cin>>subject[i];
        cout<<"Enter Marks: ";
        cin>>marks[i];
    }
    for (i=0; i<n; i++){
        sum=sum+marks[i];
    }
    cout<<endl<<endl;
}

void student::display(void){
    int i; 

    cout<<"The name is "<<name<<endl;
    cout<<"The roll number is "<<roll_number<<endl<<endl;
    cout<<"The entered marks with subject names are: "<<endl;
    for (i=0; i<n; i++)
    {   
        cout<<"Subject: "<<subject[i]<<endl;
        cout<<"Obtained Marks: "<<marks[i]<<endl;
    }
    cout<<"The total number obtained by the student is: "<<sum<<endl;
    cout<<endl<<endl;
}

int main()
{
    int num, i;

    cout<<"Enter the number of students for whom you want to enter the data: "<<endl;
    cin>>num;
    student s[num];

    for (i=0; i<num; i++){
        s[i].getdata();
    }

    cout<<endl<<endl;
    for (i=0; i<num; i++)
    {
        s[i].display();
    }

    return 0;
}