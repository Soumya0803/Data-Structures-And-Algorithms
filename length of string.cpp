#include<iostream>
using namespace std;
    int length(char c[])
    {
        int i,len=0;
        for(i=0; c[i]!='\0'; i++)
            {len ++;}

    return len;
    }
    int main()
    {
        char a[50];
        int len;
        cout<<"Enter string:";
        cin>>a;
        len=length(a);
        cout<<"Length:"<<len<<endl;
    }
