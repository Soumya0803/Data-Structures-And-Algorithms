#include<iostream>
using namespace std;
void bubblesort(int a[],int n)
{
    int i,j,swap;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(a[j]>a[j+1])
            {
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        }

    }


cout<<"sorted array:";
for(i=0; i<n; i++)
{
    cout<<a[i]<<"\t";
}


}
int main()
{
    int a[50],n,i;
    cout<<"Enter size:";
    cin>>n;
    cout<<"Enter elements:";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    bubblesort(a,n);
}
