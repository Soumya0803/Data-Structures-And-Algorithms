//To convert binary no to decimal
#include<iostream>
using namespace std;
int main()
{
    int bn,r,dn=0,n=0,v,c;
    cin>>bn;
    while(bn!=0)
    {
        r=bn%10;
        c=0,v=1;
        while(c<=n)
    {    if(c==0)
         v=1;
         else
         v=v*2;

    c++;
}   v=v*r;
    n++;
    dn=dn+v;
    bn=bn/10;

    }
    cout<<"decimal:"<<dn;
}
