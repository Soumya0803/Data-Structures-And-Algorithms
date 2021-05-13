#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter year";
    cin>>year;
    if(year>=2000 && year<=3000)
    {
        if(year%100==0)
    {
        if(year%400==0)
        {
            cout<<"leap year";
        }
    }
    else if(year%4==0)
    {
        cout<<"leap year";
    }
    else{
        cout<<"not a leap year";
    } }
    else
    {
        cout<<"Invalid year";
    }
}
