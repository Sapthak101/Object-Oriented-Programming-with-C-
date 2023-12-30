#include<iostream>
using namespace std;

class Account
{
    protected:
        int account[100], num, i;
        float balance[100], min_balance;
        char name[100][100];
    public:
        void getdata()
        {
            cout<<"Enter the number of account files you want to open (Bank Side): ";
            cin>>num;
            
            for (i=0; i<num; i++)
            {
                cout<<"Enter the account number of the customer: ";
                cin>>account[i];
                cout<<"Enter the name of the customer: ";
                cin>>name[i];
                cout<<"Enter the balance of the customer: ";
                cin>>balance[i];
            }

            cout<<"Set the minmum balance: "<<endl;
            cin>>min_balance;
        }
};
class Savings : public Account
{
    public:
        void display(int k)
        {
            cout<<endl<<endl;
            cout<<"Customer's details: \n";
            cout<<"Name: "<<name[k]<<endl;
            cout<<"Account: "<<account[k]<<endl;
            cout<<"Balance: "<<balance[k]<<endl;
            cout<<endl<<endl;  
        }
        void deposit()
        {
            int num1;
            float num2;

            cout<<"Enter the customer account number: ";
            cin>>num1;
            for (i=0; i<num; i++)
            {
                if (account[i]==num1)
                {
                    cout<<"Enter the ammount number in you want to deposit: ";
                    cin>>num2;
                    balance[i]+=num2;

                    display(i);                
                }  
            }
        }
        void withdraw()
        {
            int num1, flag=0;
            float num2;

            cout<<"Enter the customer account number: ";
            cin>>num1;
            for (i=0; i<num; i++)
            {
                if (account[i]==num1)
                {
                    flag=1;
                    cout<<"Enter the ammount number in you want to withdraw: ";
                    cin>>num2;
                    if (balance[i]-num2>=0)
                    {
                        cout<<"Cash Withdrawal successful"<<endl;
                        balance[i]-=num2;
                        if (balance[i]<min_balance)
                            cout<<"Minimum balance exceeded"<<endl;
                    }
                    else
                        cout<<"Cash withdrawal not possible"<<endl;
                    display(i);                
                }
            } 
            if (flag==0)
                cout<<"Account not found: "<<endl;
        }
};
class Current : public Account
{
    protected:
        float overdue;
    public:
        void display(int k)
        {
            cout<<endl<<endl;
            cout<<"Customer's details: "<<endl;
            cout<<"Name: "<<name[k]<<endl;
            cout<<"Account: "<<account[k]<<endl;
            cout<<"Balance: "<<balance[k]<<endl;
            cout<<endl<<endl;  
        }
        void overdue1()
        {
            int num1;
            
            cout<<"Enter the customer account number: ";
            cin>>num1;

            for (i=0; i<num; i++)
            {
                if (account[i]==num1)
                {
                    if (balance[i]<min_balance)
                    {
                        overdue=min_balance-balance[i];
                        display(i);
                        cout<<"The overdue is: "<<overdue;
                    }
                }

            }
        }
        void deposit()
        {
            int num1;
            float num2;

            cout<<"Enter the customer account number: ";
            cin>>num1;
            for (i=0; i<num; i++)
            {
                if (account[i]==num1)
                {
                    cout<<"Enter the ammount number in you want to deposit: ";
                    cin>>num2;
                    balance[i]+=num2;

                    display(i);                
                }  
            }
        }
        void withdraw()
        {
            int num1, flag=0;
            float num2;

            cout<<"Enter the customer account number: ";
            cin>>num1;
            for (i=0; i<num; i++)
            {
                if (account[i]==num1)
                {
                    flag=1;
                    cout<<"Enter the ammount number in you want to withdraw: ";
                    cin>>num2;
                    if (balance[i]-num2>=0)
                    {
                        cout<<"Cash Withdrawal successful"<<endl;
                        balance[i]-=num2;
                        if (balance[i]<min_balance)
                            cout<<"Minimum balance exceeded"<<endl;
                    }
                    else
                        cout<<"Cash withdrawal not possible"<<endl;
                    display(i);                
                }
            } 
            if (flag==0)
                cout<<"account not found"<<endl;
        }
};

int main()
{
    Savings S1;
    Current C1;
    char choice;



    cout<<"Savings account: "<<endl;
    S1.getdata();

    cout<<"User Side: "<<endl;
    cout<<"Want to deposit (D) or withdraw (W) or nothing (N): "<<endl;
    cin>>choice;
    if (choice=='D')
    {
        S1.deposit();
    }
    else if (choice=='W')
        S1.withdraw();
    else
        cout<<"Thank you";

    cout<<"Current account: "<<endl;
    C1.getdata();

    cout<<"User Side: "<<endl;
    cout<<"Want to deposit (D) or withdraw (W) or nothing (N): "<<endl;
    cin>>choice;
    if (choice=='D')
    {
        C1.deposit();
    }
    else if (choice=='W')
        C1.withdraw();
    else
        cout<<"Thank you";



    return 0;
}