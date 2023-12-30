#include<iostream>
using namespace std;

template <class T>
class A
{
    private:
        T i, j;
    public:
        void sort(T a)
        {
            T arr[a];
            
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
};

int main()
{
    A<int> a1;
    int a;

    cout<<"Enter the number of elements you wnat to enter into the array: "<<endl;
    cin>>a;

    a1.sort(a);

    return 0;
}
