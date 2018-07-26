#include<iostream>
using namespace std;
int main()
{
    int A,a,b;
    cout<<"Enter no.";
    cin>>A;
    if(A>=0)
    {

        for(a=0; a<=A; a++)
        {
            for(b=a; b<=A; b++)
            {

                if(((a*a)+(b*b))==A)

                {
                    cout<<a<<"\t"<<b<<endl;
                }

            }

        }
    }
}
