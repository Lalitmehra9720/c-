#include<iostream>
using namespace std;
int count =1;
int main()
{
     int i,j,n;
     cout<<"enter number of lines: ";
     cin>>n;
     for(i=1;i<n;i++)
     {   
        for(j=1;j<=i;j++)
        {
             cout<<count<<" ";
             count++;
        }
        cout<<endl;
     }
}