//print first 20 terms of series 3n+2 which are not multiples of 4
#include<iostream>
using namespace std;
int main()
{
    int n=1 ,c=1;
    cout<<"series"<<endl;

        while(c<=20)
        {
            if(((3*n)+2)%4!=0)
            {
                cout<<(3*n)+2<<"\t";
                c++;

            }
            n++;
        }
}
