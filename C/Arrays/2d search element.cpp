//check x is present in 2d array of n*n ,elements in increasing order in both rows and cols
#include<iostream>
using namespace std;
bool check(int a[][10],int n,int x)
{int i,j;
     for(i=0; i<n; i++)
    {

      for(j=0; j<n; j++)
      {
          if(a[i][j]==x)
            return true;
      }
    }
    return false;
}
int main()
{
    int a[10][10],i,j,n,x;
    bool r;
    cout<<"Enter size:";
    cin>>n;
    cout<<"Enter elements";


    for(i=0; i<n; i++)
    {

      for(j=0; j<n; j++)
      {
          cin>>a[i][j];
      }
    }
    cout<<"Enter element to be searched";
    cin>>x;

        r=check(a,n,x);
    if(r)
    {
        cout<<"found";
    }
    if(r==false)
    {
        cout<<"Not found";
    }

    }
