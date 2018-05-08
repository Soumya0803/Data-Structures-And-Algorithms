#include<iostream>
using namespace std;
int linearsearch(int a[],int n, int num)
{
    int i,r;
    for(i=0; i<n; i++)
    {
        if(a[i]==num)
        return 1;
    }
    return -1;
}
int main()
{
    int a[50],i,r,n,num;
    cout<<"Enter size:";
    cin>>n;
    cout<<"Enter elements:";
    for(i=0; i<n; i++)
    {
        cin>>a[i];

    }
    cout<<"Enter search element:";
    cin>>num;
        r=linearsearch(a,n,num);
        if(r==1){
            cout<<"Element found";
        }
            if(r==-1)
            {
                cout<<"Element not found";
            }
}
