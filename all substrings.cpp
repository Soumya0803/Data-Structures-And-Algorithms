#include<iostream>
using namespace std;


void allsubstring(char c[],char output[])
{
    int i,j,k;
    for(k=0; c[k]!='\0'; k++)
    {for(i=0; c[i]!='\0' ; i++)
    {
        for(j=i; j<=k; j++)
        {
          cout<<c[j];

    }cout<<endl;


}}

}

    int main()
    {
        char a[50],b[50];

        cout<<"Enter string:";
        cin>>a;


        allsubstring(a,b);

    }
