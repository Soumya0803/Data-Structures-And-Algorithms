//input n nos, check they form AP
#include<iostream>
using namespace std;
int main()
{
    int n,num,cur,d,diff,i=2;
    cout<<"enter no. of terms";
    cin>>n;
    cout<<"Enter no.";
    cin>>num;
    cout<<"Enter next";
    cin>>cur;
    diff=cur-num;
    while(i<n)
    {
        num=cur;
        cout<<"Enter next";
        cin>>cur;
        d=cur-num;
        if(diff!=d)
        {cout<<"not an AP";
        return 0;
        }
        i++;

        }

        cout<<"yes,AP";
    }





