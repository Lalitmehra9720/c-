#include<iostream>
using namespace std;
int main()
{
    int lines,i,j;
    cout<<"enter number of lines: ";
    cin>>lines;
    
    for(i=lines;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}