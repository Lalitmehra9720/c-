#include<iostream>
using namespace std;
int main()
{
    int i,j,lines;
    cout<<"enter number of rows: ";
    cin>>lines;
    for(i=1;i<=lines;i++)
    {
        for(j=1;j<=i;j++)
        {
                cout<<" * ";
        }
        int space=2*lines-2*i;
        for(j=1;j<=space;j++)
        {
             cout<<"   ";        
        }
        for(j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }

     for(i=lines;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
                cout<<" * ";
        }
        int space=2*lines-2*i;
        for(j=1;j<=space;j++)
        {
             cout<<"   ";        
        }
        for(j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}