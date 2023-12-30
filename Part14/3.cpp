#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream ofile("Question3.txt");

    cout<<"Enter 10 strings: \n";
    char str[100];
    for (int i=0; i<10; i++)
    {
        cin>>str;
        ofile<<str<<"\n";
    }
    ofile.close();

    ifstream ifile("Question3.txt");
    while(ifile.eof()==0)
    {
        char ch=ifile.get();
        cout<<ch;
    }
    ifile.close();
    
    return 0;
}