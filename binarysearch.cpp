#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int num)
{
    int mid,start=0,last=n-1;
    while(start<=last)
    {
        mid=(start+last)/2;
        if(a[mid]==num)
        {
            return 1;
        }

            if(num<a[mid])
            {
                last=mid-1;
            }
            else if(num>a[mid])
            {
                start=mid+1;
            }


    }

return -1;
}
int main()
{
    int a[50],n,i,r,num;
    cout<<"Enter size:";
    cin>>n;
    cout<<"Enter elements:";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter search element:";
    cin>>num;
    r=binarysearch(a,n,num);
    if(r==1)
    {
        cout<<" Found";
    }
    if(r==-1)
        {
            cout<<"Not Found";

        }
}
