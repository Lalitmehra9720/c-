//<----------------------------my logics----------------------------------------->
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
            cout<<++count<<" ";
        }
        cout<<endl;
    }
}
//<-------------------------apna college logic-------------------------------->
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter number of lines: ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n+1-i;j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }