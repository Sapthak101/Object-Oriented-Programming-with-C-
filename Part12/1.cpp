#include<iostream>
using namespace std;

template <class T>
void sort(T a)
{
    T arr[a], i, j;

    cout<<"Enter the elements into the array: "<<endl;
    for (i=0; i<a; i++)
        cin>>arr[i];
    for (i=0; i<a; i++)
    {
        for (j=i+1; j<a-1; j++)
        {
            T temp;
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    cout<<"The sorted elements: "<<endl;
    for (i=0; i<a; i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int num;

    cout<<"Enter the number of elements to be sorted: ";
    cin>>num;

    sort(num);

    return 0;
}