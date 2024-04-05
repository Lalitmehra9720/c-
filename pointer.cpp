#include<iostream>
using namespace std;
int main()
{
    int aadhar[5];
    //input
    int *ptr=&aadhar[0];
    for(int i=0;i<5;i++)
    {
           cout<<"enter "<<i<<" index number: ";
           cin>>aadhar[i];

    }
    //output
    for(int i=0;i<5;i++)
    {
             cout<<"index : "<<i<<" = "<<aadhar[i]<<endl;

    }
    return 0;
}