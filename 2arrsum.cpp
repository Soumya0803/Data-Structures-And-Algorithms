#include<iostream>
using namespace std;
void sum(int a[],int b[],int x,int y)
{ int c[50],i;

    if(x>y)

    {

        for(i=0; i<x; i++)
            {   if(i>=y)
              { b[i]=0;              //done so that the smaller array element is made 0l
                c[i]=a[i]+b[i];
              }
              else
                c[i]=a[i]+b[i];}

    for(i=0; i<x; i++)
    {
        cout<<c[i]<<"\t";
    }

    }
    else if(x<y)
        {

            for(i=0; i<y; i++)
           {

           {   if(i>=x)
              { a[i]=0;              //done so that the smaller array element is made 0l
                c[i]=a[i]+b[i];
              }
              else
                c[i]=a[i]+b[i];}
        }

for(i=0; i<y; i++)
    {
        cout<<c[i]<<"\t";
    }

}}
int main()
{
    int a[50],b[50],c[50],sizea,sizeb,i;
    cout<<"Enter size of first array:";
    cin>>sizea;

    cout<<"Enter elements";
     for(i=0; i<sizea; i++)
    {
        cin>>a[i];
    }

    cout<<"Enter size of second array:";
    cin>>sizeb;



    cout<<"Enter elements";
for(i=0; i<sizeb; i++)
    {
        cin>>b[i];
    }

    sum(a,b,sizea,sizeb);




}
