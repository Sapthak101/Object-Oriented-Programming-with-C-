#include<iostream>
using namespace std;

class data
{
    public:
    char name[100];
    int age, id; 
    float basic_pay, gross_pay;
};

int main()
{
 data emp[100];
 int n, i;
 
 cout<<"Enter the number of record files that you want to open: "<<endl;
 cin>>n;
 
    for (i=0; i<n; i++)
    {
        cout<<"Enter the id, name, age, Basic pay of employee $: "<< i+1<<endl;
        cin>>emp[i].id>>emp[i].name>>emp[i].age>>emp[i].basic_pay;
    
        emp[i].gross_pay=(0.10*emp[i].basic_pay)+
        emp[i].basic_pay+
        (0.80*emp[i].basic_pay) ;
    }

    for (i=0; i<n; i++)
    {
    
        cout<<endl<<"Id: "<<emp[i].id<<endl;
        cout<<"Name: "<<emp[i].name<<endl;
        cout<<"Age: "<<emp[i].age<<endl;
        cout<<"Gross Pay: "<<emp[i].gross_pay<<endl;
    }

return 0;
}