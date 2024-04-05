#include<iostream>
using namespace std;
int main()
{
     int a[3][3],b[3][3],c[3][3],i,j;
     cout<<"enter first matrix:";
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
     }
     cout<<"enter second matrix:";
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
     }
     cout<<"sum of both matrix="<<endl;
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            cout<<c[i][j]<<"  ";
        }
        cout<<endl;
     }
     cout<<"subtraction of both matrices: "<<endl;
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
            cout<<c[i][j]<<"  ";
        }
        cout<<endl;
     }
     return 0;
}