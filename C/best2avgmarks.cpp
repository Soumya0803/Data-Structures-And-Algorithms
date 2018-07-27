//input 3 subject name and marks and print avg of best 2 and name tof subjects
#include<iostream>
using namespace std;
int main()
{
    char sub1[20],sub2[20],sub3[20];
    int marks1,marks2,marks3,min,avg;
    cout<<"Enter 3 subject names";
    cin>>sub1>>sub2>>sub3;
    cout<<"Enter corresponding marks";
    cin>>marks1>>marks2>>marks3;
    min=marks1;
    if(min>marks2)
       {
        min=marks2;}
    if(min>marks3)
       {
        min=marks3;
       }
    if(min==marks1)
    {
      avg=(marks2+marks3)/2;
      cout<<sub2<<"\t"<<sub3<<endl;
      cout<<"average:"<<avg;

    }
    else if(min==marks2)
    {
      avg=(marks1+marks3)/2;
      cout<<sub1<<"t"<<sub3<<endl;
      cout<<"average:"<<avg;


    }
     else
    {
      avg=(marks1+marks2)/2;
      cout<<sub1<<"\t"<<sub2<<endl;
      cout<<"average:"<<avg;


    }

}
