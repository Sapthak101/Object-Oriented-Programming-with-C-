#include<iostream>
using namespace std;

class complex
{
    public:
     double real[100], ima[100];
     int n;   

};

int main()
{
    complex details;

    int i;
    
    cout << "Enter the number of complex numbers that you want to enter: " << endl;
    cin >> details.n;

    cout << "Enter the complex number, hint. real followed by imaginary" << endl;
    for (i=0; i<details.n; i++)
    {
        cout << "Enter the real part: " << endl; 
        cin >> details.real[i];
        cout << "Enter the imaginary part: " << endl;
        cin >> details.ima[i];
    } 

    for (i=0; i<details.n; i++)
    {
        cout << "Complex No." << i+1 << ":   "; 
        cout << details.real[i]; 
        cout << "+"; 
        cout << details.ima[i] << "i" << endl;
    } 

    return 0;
}