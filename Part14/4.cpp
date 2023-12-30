#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int i=0;
    ofstream ofile("Question4.txt");

    cout<<"Enter a strings: \n";
    char str[100];
        cin>>str;
        ofile<<str;
    ofile.close();

    ifstream ifile("Question4.txt");
    ifile.seekg(0, ios::end);
    int bytes;
    bytes=ifile.tellg();
    cout<<bytes;
    while(bytes!=i)
    {
        i++;
        ifile.seekg(-i, ios::cur);
        char ch=ifile.get();
        cout<<ch;
        ifile.seekg(0, ios::end);
    }
    ifile.close();

    return 0;
}