#include<iostream>
using namespace std;
int main()
{
    int i,j,a[3][3];
    cout<<"enter elements"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i>j||i<j)
            {
                a[j][i]=a[i][j];
            }
            else{
                a[i][j]=a[i][j];
            }
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}