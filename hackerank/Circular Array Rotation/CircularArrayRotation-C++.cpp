#include<iostream>
#include<deque>
using namespace std;
int main()
{
    int n,rot,q,temp,temp1,temp2;
    cin>>n>>rot>>q;
    deque<int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>temp2;
        arr.push_back(temp2);
    }
    for(int i=0;i<rot;i++)
    {
        temp=arr.back();
        arr.pop_back();
        arr.push_front(temp);
    }
    for(int i=0;i<q;i++)
    {
        cin>>temp1;
        cout<<arr[temp1]<<endl;
    }
    return 0;
}
