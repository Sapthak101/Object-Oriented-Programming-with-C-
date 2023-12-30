#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int i=0, count=0, count1=0, count2=0, count3=0, count4=0, count5=0, count6=0;
    ofstream ofile("Question5.txt");

    int num;
    cout<<"Enter the number of string you want to enter: ";
    cin>>num;

    cout<<"Enter a string: \n";
    for (int i=0; i<num; i++)
    {
        char str[100];

        cin>>str;
        ofile<<str<<" ";
    }
    ofile.close();

    ifstream ifile("Question5.txt");

    while(ifile.eof()==0)
    {
        char ch;
            ch=ifile.get();
            if (ifile.eof()==0)
            {
                count++;
                if (ch==' ')
                    count1++;
                else if (ch=='\n')
                    count2++;
                else if (ch>=97 && ch <=122)
                    count3++;
                else if(ch>=65 && ch<=90)
                    count4++;
                else if (ch>=48 && ch<=57)
                    count5++;
                else
                    count6++;
            }
    }

    cout<<"The number of character is: "<<count-num<<endl;
    cout<<"The number of words is: "<<count1+count2+1-1<<endl;
    cout<<"The number of lines is: "<<1<<endl;
    cout<<"The number of uppercase, lowecase, digits, and special symbols: "<<count4<<" "<<count3<<" "<<count5<<" "<<count6<<endl;

    ifile.close();

    return 0;
}