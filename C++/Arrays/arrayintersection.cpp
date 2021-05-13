//to find intersection of two arrays
#include<iostream>
using namespace std;
void intersection(int a[],int b[],int x,int y)
{
    int i,j;
    cout<<"intersection"<<endl;

    for(i=0; i<x ; i++)
    {
        for(j=0; j<y; j++)
        {
            if(a[i]==b[j])
            {

                cout<<a[i]<<"\t"<<b[j]<<endl;
            }
        }
    }
}


    int main()
    {
        int i,a[50],b[50],c[50],sizea,sizeb;
        cout<<"Enter size of first array:";
        cin>>sizea;
        cout<<"enter first array";
        for(i=0; i<sizea; i++)
        {
            cin>>a[i];
        }
        cout<<"Enter size of second array:"<<endl;
        cin>>sizeb;
        cout<<"Enter second array";
        for(i=0; i<sizeb; i++)
        {
            cin>>b[i];
        }

    intersection(a,b,sizea,sizeb);

    }
