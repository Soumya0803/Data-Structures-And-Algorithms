#include<iostream>
using namespace std;
void remove(char a[],char c[])
{
    int i,j=0;
    for(i=0; a[i]!='\0' ; i++)
    {
        if(a[i]!=a[i+1])
        {
            c[j]=a[i];
            j++;
        }


    }
    c[j]='\0';


}
    void print(char c[])
    {
        cout<<c;
    }


    int main()
    {
        char a[50],c[50];


        cout<<"Enter string:";
        cin>>a;

        remove(a,c);
        print(c);

    }
