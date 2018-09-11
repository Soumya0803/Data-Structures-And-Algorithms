//find no of 0 in an integer using recursion
#include<iostream>
using namespace std;

int check(int n)
{
    int ans,count=0;
    if(n==0)
    {
        return 0;
    }
    if(n%10==0)
    {
        count++;
    }
    ans=check(n/10);
    return(ans+count);
}
int main()
{
    int n,ans;

    cout<<"Enter integer";
    cin>>n;
    ans=check(n);
    cout<<"Answer:"<<ans;




}
