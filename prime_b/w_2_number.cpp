#include<iostream>
using namespace std;
int main()
{//program for finding prime numbers between 2 numbers
    int i,a,b;
    cout<<"enter number 1: ";
    cin>>a;
    cout<<"enter number 2: ";
    cin>>b;
    for(i=a;i<=b;i++)
    {
        int j;
        for(j=2;j<a;j++)
        {
             if(a%j==0)
             {
                break;
             }
        }
        if(j==a)
        {
            cout<<a<<" is prime.\n";
        }
        
    }
    return 0;
}