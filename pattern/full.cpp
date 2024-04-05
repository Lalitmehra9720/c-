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
            printf(" * ");//we also use printf in c++ but can't format specifier's.
        }
        cout<<endl;
    }
}