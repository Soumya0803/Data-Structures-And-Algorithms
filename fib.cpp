#include<iostream>
using namespace std;
int main()
{

int a=0,b=1,c=0,n;
cout<<"Enter n";
cin>>n;
cout<<a<<b;
while(c<n-2)
{//if(c<=n)
    c=a+b;
    cout<<c;
    a=b;
    b=c;

}

}
