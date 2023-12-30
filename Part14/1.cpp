#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream ofile("Question1.txt");

    ofile<<"This is a Demo File\n";
    ofile<<"Created by Sapthak";

    ofile.close();

    ifstream ifile("Question1.txt");

    while(ifile.eof()==0)
    {   
        char ch;
        ifile.get(ch);  //ch=ifile.get()
        cout<<ch;
    }
    ifile.close();

    return 0;
}