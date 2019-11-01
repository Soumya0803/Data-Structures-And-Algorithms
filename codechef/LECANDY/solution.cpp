#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long int n,k,sum=0,temp;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
      cin>>temp;
      sum+=temp;
    }
  cout<<(sum>k?"No":"Yes")<<endl;

  }
  return 0;
}
