#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream ofile("Question7.txt");

    ofile<<"This is a Demo File\n";
    ofile<<"Created by Sapthak";

    ofile.close();

    ifstream ifile("Question7.txt");

    while(ifile.eof()==0)
    {
        char ch;
        ifile>>ch;
        cout<<ch;
    }
    ifile.close();

    return 0;
}