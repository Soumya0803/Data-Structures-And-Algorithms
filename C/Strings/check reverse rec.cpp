//check 2 strings are reverse of each other using recursion
#include<iostream>
using namespace std;
int length(char c[])
    {
        int i,len=0;
        for(i=0; c[i]!='\0'; i++)
            {len ++;}

    return len;
    }

int check(char a[],char c[],int start, int last,int length2)
{
    bool ans;
    if(length2 !=last)
    {
        return false;
    }

    if(start==last)
    {
        if(a[start]==c[last])
        {return true;}

    }
    if(a[start]=!c[last])
    {
        return false;
    }

    ans=check(a,c,start+1,last-1,length2);

    return ans;
}
int main()
{
    char c[50],a[50];
    bool ans;
    int len,start,last,length2;
    cout<<"Enter first string";
    cin.getline(a,len);
    cout<<"Enter second string";
    cin.getline(c,len);
    last=length(a);
     length2=length(c);
    length2=length2-1;
    last=last-1;
    start=0;

    ans=check(a,c,start,last,length2);
    if(ans)
    {
        cout<<"Yes";

    }
    if(ans==false)
    {
        cout<<"No";

    }



}
