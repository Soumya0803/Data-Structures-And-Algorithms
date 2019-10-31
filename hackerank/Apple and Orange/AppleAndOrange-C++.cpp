#include<iostream>
using namespace std;

int main()
{
  int s,t,a,b,m,n,c1=0,c2=0;
  cin>>s>>t>>a>>b>>m>>n;
  int d[m],d1[n];
  for(int i=0;i<m;i++)
  {
    cin>>d[i];
    d[i]+=a;
    if(d[i]>=s && d[i]<=t)
    c1++;
  }
  for(int i=0;i<n;i++)
  {
    cin>>d1[i];
    d1[i]+=b;
    if(d1[i]>=s && d1[i]<=t)
    c2++;
  }
  cout<<c1<<endl<<c2;
  return 0;
}
//end
