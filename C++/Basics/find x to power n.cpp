//to find x to the power n

#include<iostream>
using namespace std;
int main()
{
    int x,n,c=1,p=1;

    cout<<"Enter a no.";
    cin>>x;
    cout<<"Enter power";
    cin>>n;
    if(n==0)
    {
        p=1;
    }
    else
    {
        while(c<=n)
     {
         p=p*x;
         c++;
     }
    }
     cout<<p;
}

