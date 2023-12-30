#include<iostream>
#include<string.h>

using namespace std;

class string_c
{
    private:
        char name[100];
        int len;
    public:
        string_c()
        {
            cout<<"Enter a default name: "<<endl;
            cin>>name;
            len=strlen(name);
        }
        string_c(char *c)
        {
            char *temp;
            int i;

            temp=c;
            while (*temp!='\0')
            {
                name[i]=*temp;
                i++;
                temp=temp+1;
            }
            name[i]='\0';
        }
        void display()
        {
            cout<<"The name is: "<<name<<endl;
        }
        void string_concat(string_c ch1, string_c ch2)
        {
            int i=ch1.len, j=0;
            char *temp;

            cout<<"The concatenated string is: ";

            temp=ch2.name;
            while(*temp!='\0')
            {
                ch1.name[i]=ch2.name[j];
                i++;
                j++;
                temp=temp+1;
            }
            ch1.name[i]='\0';
            cout<<ch1.name<<endl;               
        }
};

int main()
{
    char name[100];

    string_c c1;
    c1.display();

    cout<<"Enter a string: "<<endl;
    cin>>name;
    string_c c2(name);
    c2.display();

    string_c c3=c2;
    c3.display();

    c3.string_concat(c1, c2);

    return 0;
}