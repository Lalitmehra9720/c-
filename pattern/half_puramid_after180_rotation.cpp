#include<iostream>
using namespace std;
int main()
{
    int lines,i,j;
    cout<<"enter number of lines of pyramid: ";
    cin>>lines;
    for(i=1;i<=lines;i++)
    {
        for(j=1;j<=lines;j++)
        {
            if(j<=lines-i)
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}