#include<iostream>
using namespace std;
int main()
{ 
    int n,i,j,sum;
    cout<<"enter number of lines: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            sum=i+j;
            if(sum%2==0)
            {
                cout<<1<<" ";
            }
            else
            {
                cout<<0<<" ";
            }
        }    
        cout<<endl;
    }
}