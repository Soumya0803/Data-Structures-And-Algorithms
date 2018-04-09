#include<iostream>
using namespace std;
int main()

{

      int no,n,r,cube=0;

     cout<<"Enter no:";

     cin>>no;
     n=no;

    while(n!=0)

{

    r=n%10;

   cube=cube+(r*r*r);

   n=n/10;

}

      if(cube==no)

{

   cout<<"Amstrong no.";

}

   else

{

   cout<<"Not an Amstrong no.";

}

}

