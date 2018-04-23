#include<iostream>
using namespace std;
degree(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            cout<<"Degree:"<<i+1;
            break;
        }

    }
    cout<<"Degree::"<<0;
}

      int main()
    {
        int a[50], n,d;
        cout << "Enter n : ";
        cin >> n;

        cout << "Enter array : ";
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        degree(a,n);

    }
