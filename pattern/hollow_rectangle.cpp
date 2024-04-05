#include<iostream>
using namespace std;
int main()
{
    int row,col,i,j;
    cout<<"enter number of rows: ";
    cin>>row;
    cout<<"enter number of columns: ";
    cin>>col;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(i==1||i==row ||j==1||j==col)
            {
                cout<<" * ";//here we use 3 space
            }
            
            else {
                cout<<"   ";//in *pattern we use 3 space so we also use 3 spaces here
            }
        }
        cout<<endl;
    }
}