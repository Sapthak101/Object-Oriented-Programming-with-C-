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
        virtual void display(int k)
        {
            cout<<"N/A"<<endl;
        }
};
class Savings : public Account
{
    public:
        void display(int k)
        {
            if (k!=-1)
            {
            cout<<endl<<endl;
            cout<<"Customer's details: \n";
            cout<<"Name: "<<name[k]<<endl;
            cout<<"Account: "<<account[k]<<endl;
            cout<<"Balance: "<<balance[k]<<endl;
            cout<<endl<<endl;  
            }
            else
                printf("N/A\n"); 
        }
        int deposit()
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
                    return i;                
                }  
            }
            return -1;
        }
        int withdraw()
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
                    return i;                
                }
            } 
            if (flag==0)
                cout<<"Account not found: "<<endl;
            return -1;
        }
};
class Current : public Account
{
    protected:
        float overdue;
    public:
        void display(int k)
        {
            if (k!=-1)
            {
            cout<<endl<<endl;
            cout<<"Customer's details: "<<endl;
            cout<<"Name: "<<name[k]<<endl;
            cout<<"Account: "<<account[k]<<endl;
            cout<<"Balance: "<<balance[k]<<endl;
            cout<<endl<<endl;  
            }
            else
                printf("N/A\n");
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
        int deposit()
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

                    return i;                
                }  
            }
            return -1;
        }
        int withdraw()
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
                    return i;                
                }
            } 
            if (flag==0)
                cout<<"account not found"<<endl;
            return -1;
        }
};

int main()
{
    Savings S1;
    Current C1;
    char choice;

    Account *ptr;
    ptr=&S1;

    cout<<"Savings account: "<<endl;
    ptr->getdata();

    cout<<"User Side: "<<endl;
    cout<<"Want to deposit (D) or withdraw (W) or nothing (N): "<<endl;
    cin>>choice;
    if (choice=='D')
    {
        ptr->display(S1.deposit());
    }
    else if (choice=='W')
        ptr->display(S1.withdraw());
    else
        cout<<"Thank you";

    cout<<"Current account: "<<endl;
    ptr=&C1;
    ptr->getdata();

    cout<<"User Side: "<<endl;
    cout<<"Want to deposit (D) or withdraw (W) or overdue (O)  or nothing (N): "<<endl;
    cin>>choice;
    if (choice=='D')
    {
        ptr->display(C1.deposit());
    }
    else if (choice=='W')
        ptr->display(C1.withdraw());
    else if (choice=='O')
        C1.overdue1();
    else
        cout<<"\nThank You";

    return 0;
}