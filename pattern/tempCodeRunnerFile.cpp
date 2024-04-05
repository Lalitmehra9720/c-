#include<iostream>
using namespace std;
int main()
{
    int n,i,j,count,m;
    cout<<"enter number of lines: ";
    cin>>n;
    int c=n;
    for(i=1;i<=c;i++)//my logic 
    {   
        count =0;
        m=n--;
        for(j=1;j<=m;j++)
        {
            cout<<++count;
        }
        cout<<endl;
    }
}