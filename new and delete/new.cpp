#include<iostream>
using namespace std;
int main()
{
    int n,*p;
    cout<<"enter size of an array: ";
    cin>>n;
    p=new int[n];
    cout<<"enter elements on array: ";
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=s+p[i];
    }
    cout<<"sum of all elements of array:"<<s;
    delete[]p;
    return 0;
}