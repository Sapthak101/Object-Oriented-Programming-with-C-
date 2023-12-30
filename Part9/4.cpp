#include<iostream>
#include<string.h>
#define MAX 100000
using namespace std;


class string1
{
    private:
        char *n1;
    public:
        string1 (){}
        string1 (char *name1)
        {
            n1=new char[strlen(name1)];
            strcpy(n1, name1);
        }

        friend string1 operator+(string1 &, string1 &);

        void display()
        {
            cout<<"The concatenated string object of class string1 is: "<<n1<<endl;
        }
};

string1 operator+(string1 &a1, string1 &a2)
{
    string1 temp;
    int j=0, i;

    temp.n1=new char [strlen(a1.n1)+strlen(a2.n1)+1];
    strcpy(temp.n1, a1.n1);
    for (i=(strlen(a1.n1)); i<strlen(a1.n1)+strlen(a2.n1); i++)
        temp.n1[i]=a2.n1[j++];

    return temp;
}

int main()
{
    char name1[MAX], name2[MAX];

    cout<<"Enter a name: ";
    cin>>name1;
    string1 s1(name1);

    cout<<"Enter another name: ";
    cin>>name2;
    string1 s2(name2);

    string1 s3=s1+s2;

    s3.display();

    return 0;
}