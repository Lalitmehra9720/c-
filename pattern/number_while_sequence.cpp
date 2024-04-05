#include<iostream>
using namespace std;
int main()
//<----------------------------my method------------------------------------>
// {
//     int n;
//     cout<<"enter number of lines: ";
//     cin>>n;
//     int i,j,count=1;
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=n;j++)
//         {
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
// }
//<----------------------------another method----------------------------------->
{
    int n,i,j;
    cout<<"enter number of lines: ";
    cin>>n;
    i=1;
    
    int temp=1;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<temp<<" ";
            j++;
            temp++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}