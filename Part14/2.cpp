#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream ofile("Question2.txt");

    ofile<<"This is a Demo File\n";
    ofile<<"Created by Sapthak\n";

    ofile.close();

    ifstream ifile("Question2.txt");
    ofstream ofile2("Question2_2.txt");

    while(ifile.eof()==0)
    {   
        char ch;
        ch=ifile.get();  //ch=ifile.get()
        if (ifile.eof()==0)
            ofile2<<ch;
    }
    ifile.close();
    ofile2.close();
    
    ifstream ifile2("Question2_2.txt"); //the same object cannot be used because of the use of the contructor
    
    while(ifile2.eof()==0)
    { 
        char ch;  
        ch=ifile2.get();  //ch=ifile.get() or ifile2.getline(str2, 100) or getline(ifile2, str)
        cout<<ch;          // another thing is that in case of using string the pointer returb to it is the eof that is why nothing is printed outside the loop
    }   
    ifile2.close();

    return 0;
}