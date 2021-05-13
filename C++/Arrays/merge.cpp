
//merge 2 arrays in ascending order ,given arrays in asc order
#include<iostream>
using namespace std;
void merge(int a[],int b[],int sizea,int sizeb)
{
    int i,c[50],m=0,n=0,k=0;
    while(m<sizea && n<sizeb)
    {
        if(a[m]<b[n])
        {
            c[k]=a[m];
            k++;
            m++;
        }

         if(a[m]>b[n])
        {
            c[k]=b[n];
            k++;
            n++;

        }
    }

        while(m<sizea)
        {
            c[k]=a[m];
            m++;
            k++;
        }
        while(n<sizeb)
        {
            c[k]=b[n];
            n++;
            k++;
        }





    cout<<"Merged array:";
    for(i=0; i<(sizea+sizeb); i++)
    {
        cout<<c[i]<<"\t";
    }


}
int main()
{
    int a[50],b[50],sizea,sizeb,i;
    cout<<"Enter size:";
    cin>>sizea;
    cout<<"Enter elements:";
    for(i=0; i<sizea; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter size:";
    cin>>sizeb;
    cout<<"Enter elements:";
    for(i=0; i<sizeb; i++)
    {
        cin>>b[i];
    }
    merge(a,b,sizea,sizeb);
}
