#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream ofile("Question6.txt");

    ofile<<"This is a Demo File\n";
    ofile<<"Created by Sapthak";

    ofile.close();

    ifstream ifile("Question6.txt");

    ofstream ofile2("Question6_6.txt");

    while(ifile.eof()==0)
    {
        char ch;
        ch=ifile.get();
        if (ifile.eof()==0)
        {
            if (ch>=97 && ch<=122)
                ofile2<<char(ch-32);
            else if (ch>=65 && ch<=90)
                ofile2<<char(ch+32);
            else 
                ofile2<<ch;
        }
    }
    ifile.close();
    ofile2.close();

    ifstream ifile2("Question6_6.txt");

    while(ifile2.eof()==0)
    {
        char ch;
        ch=ifile2.get();
        if (ifile2.eof()==0)
            cout<<ch;
    }
    ifile2.close();


    return 0;
}