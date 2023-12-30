#include<iostream>
using namespace std;

class student
{
    public:
     char name[100];
     int roll_number, n, i;
     double sum=0.0, marks[100];

    double total_marks()
    {
        for (i=0; i<n; i++)
        {
            sum=sum+marks[i];
        }
        
        return sum;
    }
};

int main()
{
    student st_details;

    int n, i;

    cout << "Enter your name: " << endl;
    cin >> st_details.name; 

    cout << "Enter your Roll Number: " << endl;
    cin >> st_details.roll_number;

    cout << "Enter the number of subjects: " << endl;
    cin >> st_details.n;

    cout << "Enter the marks for each subject: " << endl;
    for (i=0; i<st_details.n; i++)
    {
        cin >> st_details.marks[i];
    }

    cout << "The entered name is : " << st_details.name << endl;
    cout << "The entered Roll Number is : " << st_details.roll_number << 
    endl;
    cout << "The total number is: " << st_details.total_marks() << endl;

    return 0;
}